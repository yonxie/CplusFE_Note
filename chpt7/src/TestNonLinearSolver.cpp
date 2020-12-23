// TestNonLinearSolver.cpp

#include "NonLinearSolver.h"
#include <math.h>
#include <iostream>
using namespace std;

// Steffensen's method

int main()
{
    double guess = 0.2;

    SteffensensSolver steff(guess, CallPrice); 
    steff.tol = 0.0001;
    double resultST= steff.solve(); 
    cout << "Steffensen's Method: " << resultST << endl;
    steff.printStats();                              

    return 0;
}