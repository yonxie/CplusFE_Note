// GenericInequalities.h

// Preprocessor directive; ensure that we don't 
// include a file twice.

#ifndef GenericInequalities_HPP 
#define GenericInequalities_HPP

//Max and Min of two numbers
template <class Numeric>
    Numeric Max(const Numeric& x, const Numeric& y);

template <class Numeric>
    Numeric Min(const Numeric& x, const Numeric& y);


//Max and Min of three numbers
template <class Numeric>
    Numeric Max(const Numeric& x, const Numeric& y, const Numeric& z);

template <class Numeric>
    Numeric Min(const Numeric& x, const Numeric& y, const Numeric& z);

#endif

