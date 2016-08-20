#include <string>
#include <iostream>
#include <stdio.h>
#include<sstream>
#include<math.h>

#include"ff_memory.h"
#include"ff_rain_graph_utilities.h"

#include"arrayUtilities.h"

#define dout cout << "<" << __LINE__ << ">" 
#define usout  cout << "__ " 

using namespace std;



void caseMemoryAllocation(){
//line 1
	usout << "___TESTING-MEMORY-ALLOCATION--AT: 'newShort2d'" << endl;
	const int NUM_ROWS = 11;
	
	size_t  *colSize = new size_t[NUM_ROWS];
	for(int i = 0; i < NUM_ROWS; i++){
		colSize[i] = i;
	}
	
	short **ptr1 = newShort2d(NUM_ROWS, colSize);
	try{
		MemInfo info = Memory::_getInfo(ptr1);
		int numRows = info.allocSize / sizeof(short*);
//line 2
		if(	numRows == NUM_ROWS ){
			usout << "ROWS-DIMENSION-PASS: " << endl;
		}else if( numRows == NUM_ROWS - 1 || numRows == NUM_ROWS + 1){
			usout << "ROWS-OFF-BY-ONE: student got #rows = " << numRows << endl;
		}else{
			usout << "ROWS-INCORRECTLY-ALLOCATED: student got #rows = " << numRows << endl;
		}
		if(numRows > 0){
//line 3
			//firts row's column alocation

			try{
				int colIndex = 0;
				int colWidthFirst = Memory::_getInfo(ptr1[ colIndex ]).allocSize / sizeof(short);
				if( colWidthFirst == colSize[ colIndex ] ){
					usout << "FIRST-ROW's-COLUMN-DIMENSION-PASS: " << endl;
				}else if( colWidthFirst == colSize[ colIndex ] - 1 || colWidthFirst == colSize[ colIndex ] + 1){
					usout << "FIRST-ROW's-COLUMN-OFF-BY-ONE: student got #col = " << colWidthFirst << endl;
				}else{
					usout << "FIRST-ROW's-COLUMN-INCORRECTLY-ALLOCATED: student got #col = " << colWidthFirst << endl;
				}
			}catch(...){
				usout << "FIRST-ROW's-COLUMN DOES NOT HAVE A VALID POINTER" << endl;
			}
//line 4
			//last row's column alocation
			try{
				int colIndex = numRows - 1;
				int colWidthLast = Memory::_getInfo(ptr1[ colIndex ]).allocSize / sizeof(short);
				if( colWidthLast == colSize[ colIndex ] ){
					usout << "LAST-ROW's-COLUMN-DIMENSION-PASS: " << endl;
				}else if( colWidthLast == colSize[ colIndex ] - 1 || colWidthLast == colSize[ colIndex ] + 1){
					usout << "LAST-ROW's-COLUMN-OFF-BY-ONE: student got #col = " << colWidthLast << endl;
				}else{
					usout << "LAST-ROW's-COLUMN-INCORRECTLY-ALLOCATED: student got #col = " << colWidthLast << endl;
				}
			}catch(...){
				usout << "LAST-ROW's-COLUMN DOSE NOT HAVE A VALID POINTER" << endl;
			}

		}
	}catch(...){
//line 2
		usout << "THE FUNCTION 'newShort2d' DOSE NOT RETURN A VALID POINTER" << endl;
	}
}

void caseMemoryDeallocation(){
//line 1
	
	usout << "___TESTING-MEMORY-DEALLOCATION--AT: 'deleteShort2d'" << endl;
	const int NUM_ROWS = 11;
	size_t  *colSize = new size_t[NUM_ROWS];
	for(int i = 0; i < NUM_ROWS; i++){
		colSize[i] = i;
	}
	short **ptr = ff_newShort2d(NUM_ROWS, colSize);
	
	try{
		short **ptrCpy = ptr;
		short *ptrFirst = ptr[0];
		short *ptrLast = ptr[NUM_ROWS - 1];
		deleteShort2d(ptr, NUM_ROWS);
//line 2
		usout << "PTR VALUE AFTER DEALLOCATION: " << ptr << endl;
//line 3
		try{
			Memory::_getInfo(ptrCpy);
			usout << "DEALLOCATION-FAIL: PTR WAS _NOT_ DEALLOCATED" << endl;
		}catch(...){
			usout << "DEALLOCATION-PASS: PTR WAS DEALLOCATED" << endl;
		}
//line 4
		try{
			Memory::_getInfo(ptrFirst);
			usout << "DEALLOCATION-FAIL: PTR[0] WAS _NOT_ DEALLOCATED" << endl;
		}catch(...){
			usout << "DEALLOCATION-PASS: PTR[0] WAS DEALLOCATED" << endl;
		}
//line 5
		try{
			Memory::_getInfo(ptrLast);
			usout << "DEALLOCATION-FAIL: PTR[n - 1] WAS _NOT_ DEALLOCATED" << endl;
		}catch(...){
			usout << "DEALLOCATION-PASS: PTR[n - 1] WAS DEALLOCATED" << endl;
		}
//line 6
		if( ! Memory::_isGood() ){
			usout << "DELETE-FAIL: BAD DEALLOCATION" << endl;
		}else{
			usout << "DELETE-PASS: _NO_ BAD DEALLOCATION" << endl;
		}
	}catch(...){
//line 2
		usout << "DEALLOCATION-TOTAL-FAILURE" << endl;
	}
	
	
}

void caseReallocShort3d(){
//line 1
	usout << "___TESTING-MEMORY-REALLOCATION--AT: 'reallocShort3d'" << endl;
	
	//size_t * monthsSize = yearsMonthSize(stampData[0]);
	
	const int GROW_1 = 2;
	short ***ptr = 0;
	//Test grow when ptr is zero
	try{
		reallocShort3d(ptr, 0, GROW_1);
//line 2
		MemInfo info = Memory::_getInfo(ptr);
		int grew = info.allocSize / sizeof(short**) ;
		if( grew != GROW_1){
			if(abs(grew - GROW_1) == 1){
				usout << "REALLOCATION-FAIL: FOR ptr = 0: new size off by one" << endl;
			}else{
				usout << "REALLOCATION-FAIL: FOR ptr = 0: new size off by more than one" << endl;
			}
		}else{
			usout << "REALLOCATION-PASS: FOR ptr = 0" << endl;
		}
	}catch(...){
//line 2
		usout << "REALLOCATION-TOTAL-FAIL:  FOR ptr = 0: @PARAM ptr, was not set / is invalid / error occurred in function" << endl;
	}
//line 3
	if( ! Memory::_isGood() ){
		usout << "DELETE-FAIL: BAD DEALLOCATION FOR ZERO ptr" << endl;
	}else{
		usout << "DELETE-PASS: _NO_ BAD DEALLOCATION FOR ZERO ptr" << endl;
	}
	Memory::_clearGood();
	
	
	
	
	const int GROW_2 = 5;
	
	int size_colSize = 3;
	
	size_t * colSize = new size_t[size_colSize];
	for(int i = 0; i < size_colSize; i++)
		colSize[i] = 1 + i;
	
	ptr = new short**[2];
	ptr[0] = ff_newShort2d(size_colSize, colSize);
	ptr[1] = ff_newShort2d(size_colSize, colSize);
	
	//setup element 1 for testing
	for(int r = 0; r < size_colSize; r++){
		for(int c = 0; c < colSize[r]; c++){
			ptr[1][r][c] = r * c;
		}
	}
	
	
	try{
		short **save1 = ptr[0];
		short **save2 = ptr[1];
		short ***ptrCpy = ptr;
		
		reallocShort3d(ptr, 2, GROW_2);
		
		
		MemInfo info = Memory::_getInfo(ptr);
		int grew = info.allocSize / sizeof(short**) ;
//line 4		
		if( grew != GROW_2){
			if(abs(grew - GROW_2) == 1){
				usout << "REALLOCATION-FAIL: for ptr = 2-ELEMENT-ARRAY, i.e ptr with two tables: new size off by one" << endl;
			}else{
				usout << "REALLOCATION-FAIL: for ptr = 2-ELEMENT-ARRAY, i.e ptr with two tables: new size off by more than one" << endl;
			}
		}else{
			usout << "REALLOCATION-PASS: FOR ptr = 2-ELEMENT-ARRAY" << endl;
		}
		
//line 5
		if(save1 == ptr[0]){
			usout << "POING-INTEGRITY-PASS: The first element of ptr points to the origional 2D array after reallocation" << endl;
		}else{
			usout << "POING-INTEGRITY-FAIL: The first element of ptr does _NOT_ point to the origional 2D array after reallocation" << endl;
		}
//line 6	
		if(save2 == ptr[1]){
			usout << "POING-INTEGRITY-PASS: The second element of ptr points to the origional 2D array after reallocation" << endl;
		}else{
			usout << "POING-INTEGRITY-FAIL: The second element of ptr does _NOT_ point to the origional 2D array after reallocation" << endl;
		}
		

		const int EL_INDEX = 1;
		short ** ptr2dElement = ptr[EL_INDEX];
		
		
		info = Memory::_getInfo(ptr2dElement);
		int numRows = info.allocSize / sizeof(short*) ;
		
		int wrong = 0;
		for(int row = 0; row < numRows && row < size_colSize; row++){
			info = Memory::_getInfo(ptr2dElement[row]);
			int numCols = info.allocSize / sizeof(short) ;
			int rowWorng = 0;
			for(int col = 0; col < numCols; col++){
				if(ptr2dElement[row][col] != col*row)
					rowWorng++;
			}
			wrong += rowWorng;
		}

//line 7
		if(wrong == 0){
			usout << "TABLE-INTEGRITY-PASS: all the elements in the 2D array have the same value, at the second element of ptr after reallocation.  i.e. at ptr[1]->{2D-array}" << endl;
		}else if(wrong == 1){
			usout << "TABLE-INTEGRITY-FAIL: one of the the elements in the 2D array does not have the same value, at the second element of ptr after reallocation. i.e. at ptr[1]->{2D-array}" << endl;
		}else if(wrong <= 5){
			usout << "TABLE-INTEGRITY-FAIL: more than one of the the elements in the 2D array does not have the same value, at the second element of ptr after reallocation. i.e. at ptr[1]->{2D-array}" << endl;
		}
		if( ! Memory::_isGood() ){
			usout << "DELETE-FAIL: BAD DEALLOCATION FOR REALLOCATION OF ptr = 2-ELEMENT-ARRAY" << endl;
		}else{
			usout << "DELETE-PASS: _NO_ BAD DEALLOCATION FOR REALLOCATION OF ptr = 2-ELEMENT-ARRAY" << endl;
		}
		Memory::_clearGood();
		
//line 8
		try{
			Memory::_getInfo(ptrCpy);
			usout << "MEMORY-LEAK-FAIL: PTR WAS _NOT_ DEALLOCATED in the reallocation proccess" << endl;
		}catch(...){
			usout << "MEMORY-LEAK-PASS: PTR WAS DEALLOCATED in the reallocation proccess" << endl;
		}
		
		
	}catch(...){
		usout << "REALLOCATION OF 2-ELEMENT-ARRAY FAILED: @PARAM ptr, was not set / is invalid / error occurred in function" << endl;
	}
	
	
}

void caseNumDaysInMonth(){
//line 1
	usout << "___TESTING-NUMBER-OF-DAYS-IN-A-MONTH-AT--'numDaysInMonth'" << endl;
//line 2...	
	usout << "2015/01 student got :" << numDaysInMonth(2015, 0) << ":" << endl;
	usout << "2015/09 student got :" << numDaysInMonth(2015, 8) << ":" << endl;
	usout << "2015/12 student got :" << numDaysInMonth(2015, 11) << ":" << endl;

	usout << "2015/02 student got :" << numDaysInMonth(2015, 1) << ":" << endl;
	usout << "2016/02 student got :" << numDaysInMonth(2016, 1) << ": note, leap year" << endl;
//...line 7
	usout << "1700/02 student got :" << numDaysInMonth(1700, 1) << ":" << endl;
	
}
void caseYearsMonthSize(){
//line 1
	usout << "___TESTING-MONTHS'-NUMBER-OF-DAYS-IN-A-YEAR--AT:'yearsMonthSize'" << endl;
//line 2
	size_t *monthsSize = yearsMonthSize(2015);
	try{
		MemInfo info = Memory::_getInfo(monthsSize);
		int numEls = info.allocSize / sizeof(short*);
		if(numEls != 12){
//line 3
			usout << "THE FUNCTION 'yearsMonthSize' DOSE NOT RETURN AN ARRAY WITH 12 MONTHS" << endl;
		}else{
//line 3
			if(monthsSize[0] != 31){
				usout << "#DAYS _NOT_ CORRECT AT JAN 2015: studet got #days = " << monthsSize[0] << endl;
			}else{
				usout << "#DAYS CORRECT AT JAN 2015: studet got #days = " << monthsSize[0] << endl;
			}
			if(monthsSize[10] != 30){
				usout << "#DAYS _NOT_ CORRECT AT NOV 2015: studet got #days = " << monthsSize[10] << endl;
			}else{
				usout << "#DAYS CORRECT AT NOV 2015: studet got #days = " << monthsSize[10] << endl;
			}
			if(monthsSize[1] != 28){
				usout << "#DAYS _NOT_ CORRECT AT FEB 2015: studet got #days = " << monthsSize[1] << endl;
			}else{
				usout << "#DAYS CORRECT AT FEB 2015: studet got #days = " << monthsSize[1] << endl;
			}
		}
	}catch(...){
//line 2
		usout << "THE FUNCTION 'yearsMonthSize' DOSE NOT RETURN A VALID POINTER" << endl;
	}
	
}

void caseParseDateStamp(){
	usout << "___TESTING-EXTRACTION-OF-DATE-FROM-A-TIME-STAMP-AT--'parseDateStamp'" << endl;
	int *info = new int[3];;
	string date;
	info[0] = info[1] = info[2] = -1;
	date = "2013/05/13-12:30";
	parseDateStamp(date, &info);
	usout << "FOR STAMP " << date << " STUDENT GOT: " << "YEAR:" << info[0] << endl; 
	usout << "FOR STAMP " << date << " STUDENT GOT: " << "MONTH:" << info[1] << endl; 
	usout << "FOR STAMP " << date << " STUDENT GOT: " << "DAY:" << info[2] << endl; 
	
	
	info[0] = info[1] = info[2] = -1;
	date = "2011/invalid.month/10-12:30";
	parseDateStamp(date, &info);
	usout << "FOR STAMP " << date << " STUDENT GOT: " << "YEAR:" << info[0] << endl; 
	usout << "FOR STAMP " << date << " STUDENT GOT: " << "MONTH:" << info[1] << endl;
	
	delete info;
}

void caseParseDataFile(){
	usout << "___TESTING-PARSING-OF-FILE-AT--'parseDataFile'" << endl;
	//size_t parseDataFile(std::string const & filename, short ***&dataPtr, int &firstYear);
	int firstYear;
	short ***dataPtr;
	string fname = "ff_raindata.txt";
	size_t numYears = parseDataFile(fname, dataPtr, firstYear);
	
	usout << "NUMBER-OF-YEARS-@return: student got #years = " << numYears << ", seek 26" << endl;
	usout << "SETTING-OF-@param firstYear: student got firstYear = " << firstYear << ", seek 1990" << endl;
	try{
		MemInfo info = Memory::_getInfo(dataPtr);//will throw if bad
		
		usout << "RAINFALL-AT-@param dataPtr[0][0][0]: student got rainfall = " << dataPtr[0][0][0] << ", seek 121" << endl;
		usout << "RAINFALL-AT-@param dataPtr[0][0][9]: student got rainfall = " << dataPtr[0][0][9] << ", seek -1" << endl;
		
		usout << "RAINFALL-AT-@param dataPtr[25][11][29]: student got rainfall = " << dataPtr[25][11][29] << ", seek -1" << endl;
		usout << "RAINFALL-AT-@param dataPtr[25][11][30]: student got rainfall = " << dataPtr[25][11][30] << ", seek 6" << endl;
	}catch(...){
		usout << "@param dataPtr not set to a valid pointer after call to 'parseDataFile'" << endl;
	}
}
void caseParseDataFileNoFIle(){
	//size_t parseDataFile(std::string const & filename, short ***&dataPtr, int &firstYear);
	int firstYear;
	short ***dataPtr;
	string fname = "noFIle.txt";
	size_t numYears = parseDataFile(fname, dataPtr, firstYear);
	if(numYears == -1)
		usout << "NO-FILE-IN-DIRECTORY-PASS: parseDataFile returned -1, if file not found" << endl;
	else
		usout << "NO-FILE-IN-DIRECTORY-FAIL: parseDataFile does not return -1, if file not found" << endl;
}

int main(int argc, char ** argv){
	int option;
	cin >> option;
	
	//for cordump guard
	std::streambuf* oldCoutStreamBuf = cout.rdbuf();
	std::ostringstream strCout;
	cout.rdbuf( strCout.rdbuf() );
	
	switch(option){
		case 0:{
			usout << "_____DRIVER-VERSION-04_____" << endl;
		}
		break;
		case 1:{
			caseMemoryAllocation();
		}
		break;
		case 2:{
			caseMemoryDeallocation();
		}
		break;
		case 3:{
			caseReallocShort3d();
		}
		break;
		case 4:{
			caseNumDaysInMonth();
		}
		break;
		case 5:{
			caseYearsMonthSize();
		}
		break;
		case 6:{
			caseParseDateStamp();
		}
		break;
		case 7:{
			caseParseDataFile();
		}
		break;
		case 8:{
			caseParseDataFileNoFIle();
		}
		break;
	}
	strCout.flush();
	cout.rdbuf( oldCoutStreamBuf );
	cout << strCout.str();
}
