// NonLinearSolver.h

#include <math.h>
#include <iostream>
using namespace std;


// Base class
class NonLinearSolver
{
    public:

        double (*myF) (double x);          // function who root we want
        double tol;                        // desired accuracy
    
    public:

        // NonLinearSolver(double (*function)(double x)) = 0;
        virtual double solve() = 0;
};


// SteffensensSolver
class SteffensensSolver: public NonLinearSolver
{ // SteffensensSolver: One-step solver

    private:

        double x0;      // initial guess
        double xPrevious, xCurrent;
        long n;
    
    public:

        SteffensensSolver(double guess, double (*myfunc)(double))
        {
            x0 = guess; xPrevious = x0;
            myF = myfunc;
        }

        double solve()
        {
            double tmp; 
            double hn; 
            n=1; 
            xPrevious = x0;

        L1:
            tmp = myF(xPrevious);
            hn = (myF(xPrevious + tmp) - tmp)/ tmp; 
            hn = tmp/hn; 
            xCurrent = xPrevious - hn;
            xPrevious = xCurrent;

            n++;

            if (fabs(hn) <= tol)
            {
                return xCurrent;
            }
            goto L1;
        }
        void printStats() const
        {
            cout << "\n Data pertaining to Steffensen's method \n" << endl;
            cout << "Value: " << xCurrent << endl; 
            cout << "Number of iterations (actual): " << n << endl;
        }

};

double N(const double& x)
{
    return (1 + erf(x/sqrt(2))) / 2;
};

double CallPrice(double sig) 
{
    // Test case Haug p. 172; student exercise to extend it 
    double S = 59.0; 
    double K = 60.0; 
    double r = 0.067; 
    double marketPrice = 2.82; // The call price 
    double b = r; 
    double T = 0.25;
    
    // Three months
    double tmp = sig * sqrt(T); 
    double d1 = ( log(S/K) + (b+ (sig*sig)*0.5 ) * T )/ tmp; 
    double d2 = d1 - tmp;
    double calculatedValue = (S * exp((b-r)*T) * N(d1)) - (K * exp(-r * T)* N(d2));
    // Function in the form f(x) = 0 
    
    return marketPrice - calculatedValue;

};

