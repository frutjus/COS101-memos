#ifndef NAMESORT_H
#define NAMESORT_H 

#include <iostream>
#include <fstream>

using namespace std;

/* Sorts by both surname and first name, but with surnames first. */
void sortSurnameFirst(string surnames[], string firstnames[], size_t size);

/* Sorts by both surname and first name, but with first names first */
void sortFirstnameFirst(string surnames[], string firstnames[], size_t size);

/* Display a header with a line of dashes below it and then
displays the names in the arrays in the order in which they are stored in the arrays.*/
void displayNames(string surnames[], string firstnames[], size_t size);

#endif
