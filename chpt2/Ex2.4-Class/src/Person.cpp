// Person.cpp

#include "Person.h"

// define class body
Person::Person(const string& name, const DatasimDate& DateofBirth)
{   // assign variables

    nam = name;
    dob = DateofBirth;
    createdD = DatasimDate();  // default today

}

void Person::print() const
{
    cout << "\n ** Person Data **\n";
    cout << "Name: " << nam << ", Date of Birth: " << dob << ", Age: " << age() << endl;
    
}

int Person::age() const
{
    return int(double(DatasimDate()-dob)/365.0);
}

