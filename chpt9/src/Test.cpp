//Test.cpp

#include <vector>
#include <iostream>
#include <typeinfo>
#include "Exception.h"
#include "Reciprocal.h"
#include "TypeExample.h"
using namespace std;


int main()
{
    //////// Test Exception Handling ///////////
    int size = 10;
    double elementsValue = 3.1415;
    vector<double> myArray(size, elementsValue);
    myArray[5] = 0.0; 

    try
    {
        double answer;
        answer = sumReciprocal<double>(myArray);
        cout << "Sum of Reciprocals: " << answer << endl;
    }
    catch (ZeroDivide& exception)
    {
        exception.print();
    }


    //////// Test Exception Handling ///////////
    D1 d1, d11;
    D2 d2;

    const type_info& myRef = typeid(d1);
    cout << "Human-readable name: " << myRef.name() << endl;
    const type_info* info_pte = &myRef;   
    cout << "Human-readable name: " << info_pte->name() << endl;

    Base* b = &d1; 
    const type_info& myRef2 = typeid(*b);
    cout << "Human-readable name: " << myRef2.name() << endl;
    
    return 0;
}