// TestPerson.cpp


#include <iostream>
#include "DatasimDate.h"
#include "Person.h"
#include <string>
using namespace std;

// Main function
int main()
{

	DatasimDate myBirthday(29,8,1952);    // declare a birthday object
	string myName("Yong Xie");            // declare a string name object
	Person dd(myName, myBirthday);        // declare a Person object
	dd.print();

	return 0;
}