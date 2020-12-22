// Test.cpp

#include "SimpleOption.h"

int main()
{
    ///// Test Class //////

    SimpleOption opt1;   // call default constructor needs no ().
    opt1.print();

    ///// Array Scope //////

    SimpleOption myPortfolio[5];

    for (int i=0; i < 5; i++)
    {
        myPortfolio[i].print();
    }

    // Access with out-of-scope index
    myPortfolio[-1].print();        // erroneous output


    ////// Pointer ///////

    SimpleOption* opt;        // declare pointer, value not defined
    SimpleOption* opt2;

    opt = new SimpleOption;        // one can use SimpleOption and SimpleOption();
    opt -> print();

    // equal to
    (*opt).print();

    opt2 = new SimpleOption(9.0, 110.0);
    opt2 -> print();
    
    // after deleting momery, the pointer type still exists before going out of scope.
    delete opt2;
    delete opt;


    SimpleOption* optArray;
    const int N = 10; 
    optArray = new SimpleOption[N]; // Default constructor called
    
    // For array, elements are object, instead of array.
    for (int j=0; j<N; j++) 
    { 
        optArray[j].print();
    }

    delete [] optArray;  // [] is essential

return 0;
}