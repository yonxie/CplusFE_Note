// TestSTL.cpp

#include "Print.h"
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n = 10;
    double val = 3.14;

    vector<double> myVec(n, val);
    myVec[0] = 2.0;
    myVec[1] = 456.76;
    print(myVec);

    int last_element = myVec.size() - 1;
    myVec[last_element] = 55.66;
    print<double>(myVec);   // No need to specify type
    print(myVec);
    

    ///// Algorithm /////

    // copy
    vector<double> myVec2(myVec.size());
    copy(myVec.begin(), myVec.end(), myVec2.begin());
    print(myVec2, string("copy to a vector"));

    // replace
    double oldVal = 3.14; 
    double newVal = 999; 
    replace(myVec2.begin(), myVec2.end(), oldVal, newVal);
    print(myVec2, string("Modified value of vec3"));    

    //remove
    remove(myVec2.begin(), myVec2.end(), newVal); 
    print(myVec2, string("Removed element from vec3"));

    return 0;
}