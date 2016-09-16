#include "paintTools.h"

/* Calculate the area of an item if length and breadth 
of the item is given. */
double getItemArea(double length, double breadth){
	return length * breadth;
}


/* Calculate the total area of a number of similar sized items. */
double getTotalArea(int number, double area){
	return number * area;
}


/* Calculate the actual area if the total area and the
area that should not be painted (gaps) is given. */
double getActualArea(double total, double gaps){
	return total - gaps;
}


/* Calculate the area of the inside walls of a room 
assuming there is no windows or doors.  */
double  getRoomArea(double width, double length, double height){
	double area = 2 * getItemArea(width,height) 
	+ 2 getItemArea(length, height);
	return area;
}


/* Calculate the number of tins of paint that will be used
for a given area. You need a full tin for any fraction needed. */
int  getTins(double area){
	int areaInt = static_cast<int>(area);
	if (area > areaInt)
	{
		areaInt++;
	}
	int fracPart = areaInt % SQM_PER_TIN;
	if(fracPart > 0)
	{
		return ((area / SQM_PER_TIN) + 1);
	}
	else
	{
		return (area / SQM_PER_TIN);
	}
}



/* Calculate the number hours that will be needed, given an area. */
double  getHours(double area){
	double sqm_per_hour = SQM_PER_DAY/8.0;
	return (area / sqm_per_hour);
	return 0;
}
