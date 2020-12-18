// GenericInequalities.cpp


/* 

Note: 

Must include cpp file when it contains template object.

*/

#ifndef GenericInequalities_CPP 
#define GenericInequalities_CPP

#include "GenericInequalities.h"

// Max and Min of two numbers
template <class Numeric>
Numeric Max(const Numeric& x, const Numeric& y)
{
    if (x > y)
        return x;
    return y;
}

template <class Numeric>
Numeric Min(const Numeric& x, const Numeric& y)
{
    if (x > y)
        return y;
    return x;
}


// Max and Min of three numbers
template <class Numeric>
Numeric Max(const Numeric& x, const Numeric& y, const Numeric& z)
{
    return Max<Numeric>(Max<Numeric>(x, y), z);
}

template <class Numeric>
Numeric Min(const Numeric& x, const Numeric& y, const Numeric& z)
{
    return Min<Numeric>(Min<Numeric>(x, y), z);
}


#endif