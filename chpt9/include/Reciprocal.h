// Reciprocal.h

#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include "Exception.h"

using namespace std;

template <class V> 
V sumReciprocal(const vector<V>& array)
{
    V ans = V(0.0);
    for (int j = 0; j < array.size(); j++)
    {
        if (fabs(array[j] < 0.001))
        {
            throw ZeroDivide("divide by zero", "sumReciprocals", string());           
        }
        ans += 1.0/array[j];
    }

    return ans;
}