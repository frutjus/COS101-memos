#ifndef MEMORY_H
#define MEMORY_H

//BY MS Richter
#include <new>
#include<stdlib.h>
#include<map>
#include<iostream>

struct MemInfo
{
	MemInfo(size_t allocSize_);
	size_t allocSize;
private:
	void (*deleteCallback)(void*ptr);
	friend class Memory;
};

class Memory
{
public:
	~Memory();
	static Memory & _ins();
	static MemInfo _getInfo(void* ptr);
	
	static void _setDeleteCallback(void* ptr, void (*call)(void*ptr));
	static void _eraseDeleteCallback(void* ptr);
	
	static bool _isGood();
	static void _clearGood();
	
	
protected:
	void registerMem(void * ptr, size_t size);
	void deRegisterMem(void *ptr);
	
	std::map<void*,size_t> map_ptr;
	std::map<size_t,MemInfo> map_info;
	
	bool badFree;
	
	size_t _uid;
	
	Memory();
	Memory(Memory const &other);
	Memory & operator = (Memory const &other);
	
	friend void* operator new (size_t size);
	friend void operator delete (void* ptr) noexcept;
	//friend void operator delete (void* ptr);
};

#endif




