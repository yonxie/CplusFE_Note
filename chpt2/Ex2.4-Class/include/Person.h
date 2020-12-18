// Person.h

// 'Hello World' Class. Function declaration

#ifndef Person_HPP
#define Person_HPP

#include "DatasimDate.h"
#include <string>

using namespace std;

class Person
{

public: // everything is public

    // data
    string nam;        // name
    DatasimDate dob;    // date of birth 
    DatasimDate createdD; 

public: 
    // functions  
    Person(const string& name, 
            const DatasimDate& DateofBirth);
    void print() const;
    int  age() const;

};

#endif