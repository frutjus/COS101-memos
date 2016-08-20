#include"ff_rain_graph_utilities.h"





short ** ff_newShort2d(size_t numRow, size_t const*colSize){
	short ** mem;
	mem = new short*[numRow];
	//Memory::_setDeleteCallback(mem, TestDelete);
	
	for(int i = 0; i < numRow; i++){
		mem[i] = new short[colSize[i]];
		for(int j =0; j < colSize[i]; j++)
			mem[i][j] = -1;
		//Memory::_setDeleteCallback(mem[i], TestDelete);
	}
	
	return mem;
}


void ff_deleteShort2d(short **&ptr, size_t rowSize){
	for(int i = 0; i < rowSize; i++){
		delete ptr[i];
	}
	delete ptr;
	ptr = 0;
}