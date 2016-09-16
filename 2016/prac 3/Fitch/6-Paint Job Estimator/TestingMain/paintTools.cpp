#include "paintTools.h"

/******
/*  This file contains fake implementations of the functions to enable
/*   us to verify that the functions are used by the main program
 */
double getItemArea(double length, double breadth){
	return 0;
}

double getTotalArea(int number, double area){
	return area;
}

double getActualArea(double total, double gaps){
	return total + gaps;
}

double  getRoomArea(double width, double length, double height){
	return 20;
}


int  getTins(double area){
	return 5;
}

double  getHours(double area){
	return 8;
}
