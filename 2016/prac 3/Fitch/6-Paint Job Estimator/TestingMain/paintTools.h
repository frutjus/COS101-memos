#ifndef PIANT_TOOLS_H
#define PIANT_TOOLS_H

const double PRICE_PER_TIN = 11.5;
const int SQM_PER_TIN = 70;
const int SQM_PER_DAY = 70; //A day is 8 hours
const double LABOUR_PER_HOUR = 8.88;
const double DOOR_AREA = 0.9;
const double WINDOW_AREA = 0.5;


/* Calculate the area of an item if length and breadth 
of the item is given. */
double getItemArea(double length, double breadth);



/* Calculate the total area of a number of similar sized items. */
double getTotalArea(int number, double area);



/* Calculate the actual area if the total area and the
area that should not be painted (gaps) is given. */
double getActualArea(double total, double gaps);



/* Calculate the area of the inside walls of a room 
assuming there is no windows or doors.  */
double  getRoomArea(double width, double length, double height);



/* Calculate the number of tins of paint that will be used
for a given area. You need a full tin for any fraction needed. */
int  getTins(double area);



/* Calculate the number hours that will be needed, given an area. */
double  getHours(double area);

#endif
