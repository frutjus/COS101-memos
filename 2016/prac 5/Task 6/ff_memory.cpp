//BY MS Richter
#include"ff_memory.h"

#include<sstream>

using namespace std;


typedef pair<void*, size_t> mapptr_p;
typedef map<void*, size_t> mapptr_t;
typedef mapptr_t::iterator mapptr_i;

typedef pair<size_t, MemInfo> meminfo_p;


MemInfo::MemInfo(size_t allocSize_)
	:allocSize(allocSize_)
	,deleteCallback(0)
{
}
Memory::~Memory(){
	/*
	cout << "ptrs:" << endl;
	for(mapptr_i ptrIter = map_ptr.begin(); ptrIter != map_ptr.end(); ptrIter++){
		cout << ptrIter->first << endl;
	}
	*/
}

Memory & Memory::_ins(){
	static Memory instance;
	return instance;
}
MemInfo Memory::_getInfo(void* ptr){
	Memory & m = Memory::_ins();
	return m.map_info.at(m.map_ptr.at(ptr));
}
void Memory::_setDeleteCallback(void* ptr, void (*call)(void*ptr)){
	Memory & m = Memory::_ins();
	m.map_info.at(m.map_ptr.at(ptr)).deleteCallback = call;
}
void Memory::_eraseDeleteCallback(void* ptr){
	Memory & m = Memory::_ins();
	m.map_info.at(m.map_ptr.at(ptr)).deleteCallback = 0;
}
bool Memory::_isGood(){
	Memory & m = Memory::_ins();
	return ! m.badFree;
}
void Memory::_clearGood(){
	Memory::_ins().badFree = false;
}
void Memory::registerMem(void * ptr, size_t size){
	_uid++;
	map_ptr.insert(mapptr_p(ptr, _uid));
	map_info.insert(  meminfo_p( _uid, MemInfo(size) )  );
}
void Memory::deRegisterMem(void *ptr){
	mapptr_i el = map_ptr.find(ptr);
	if(el == map_ptr.end()){
//TODO: error handling (throw)
		stringstream ss;
		ss << "dealocation failed at: " << ptr;
		throw string(ss.str());
		return;
	}
	MemInfo & info = map_info.at( el->second );
	if(info.deleteCallback != 0){
		info.deleteCallback(ptr);
	}
	size_t second = el->second;
	map_ptr.erase(el);
	map_info.erase( second );
	
}
	
Memory::Memory()
	:_uid(0)
	,badFree(false)
{
}
Memory::Memory(Memory const &other){}
Memory & Memory::operator = (Memory const &other){return _ins();}

//NOT THREAD SAFE
void* operator new (size_t size){
	static bool disableReg = false;
	void * mem = malloc(size);
	if(mem == 0)
		throw std::bad_alloc();
	
	if( ! disableReg){
		disableReg = true;
		Memory::_ins().registerMem(mem, size);
		disableReg = false;
	}
	return mem;
}
//NOT THREAD SAFE
void operator delete (void* ptr) noexcept{
//void operator delete (void* ptr){
	static bool disableDeReg = false;
	if(ptr == 0)
		return;
	if( ! disableDeReg){
			disableDeReg = true;
//TODO: error handling
		try{
			Memory::_ins().deRegisterMem(ptr);
			free(ptr);
		}catch(...){
			disableDeReg = false;
			Memory::_ins().badFree = true;
			//throw;
		}
		disableDeReg = false;
	}
}