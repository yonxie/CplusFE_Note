// Inequalities.cpp
// Code file containing bodies of functions.


#include "inequalities.h"

// Max of 2 numbers
double Max(double x, double y){

    if (x > y)
        return x;
    return y;

}

// Max of 3 numbers
double Max(double x, double y, double z){
    return Max(Max(x, y), z);
}

// Min of 2 numbers
double Min(double x, double y){

    if (x > y)
        return y;
    return x;

}

// Min of 3 numbers
double Min(double x, double y, double z){
    return Min(Min(x, y), z);
}

