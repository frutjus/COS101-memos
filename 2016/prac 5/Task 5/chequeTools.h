// DO NOT EDIT THIS HEADER FILE
// Editing this header file could cause you to get 0.
// Implement all functions in your .cpp file.
#ifndef CHEQUE_TOOLS_H
#define CHEQUE_TOOLS_H
#include <string>

/**
*@brief	
*	Convert an integer number to a string representation of that number
*	If the number 9765 gets passed in, 
* 	Return "Nine Thousand Seven Hundred and Sixty Five"
*@param amount 
*	The integer representation of the number. Will be > 0 and <= 10 000
*@return 
*	The string representation of the number
**/
std::string numToString(int amount);

/**
*@brief	
*	Return a string representation of the current date.
*	For example, for the 6th of May 2016, "2015-06-05" should be returned
*@return 
*	The string representation of current date in the format YYYY-MM-DD.
**/
std::string getDate();

/**
*@brief	
*	Reads the file 'chequeFacts.txt'
*	Reads in the routing number, account number and cheque number
*	Assigns these values to the relevant reference variables passed in
*	Increments the cheque number, writes it back to the file 'chequeFacts.txt'
*	Along with the routing number and account number
*@note
*	The file will be in the format:
*	 9 digit routing number\n
*	 14 digit account number\n
*	 5 digit cheque number\n
*@param routing 
*	Reference variable. Assign the routing number from the file to this variable
*	Should be 9 digits long
*@param account 
*	Reference variable. Assign the account number from the file in to this variable
*	Should be 14 digits long
*@param chequeNumber 
*	Reference variable. Assign the cheque number from the file in to this variable
*	Should be 5 digits long
**/
void getChequeFacts(std::string &routing, std::string &account, std::string &chequeNumber);

#endif
