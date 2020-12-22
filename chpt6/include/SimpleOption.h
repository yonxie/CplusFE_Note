// SimpleOption.h

#include <iostream>
using namespace std;

class SimpleOption
{
    public:
        double T;
        double K;

        SimpleOption () {T=1.0; K=100.0;};
        inline SimpleOption(double t, double k) {T=t; K=k;};
        virtual ~SimpleOption() {};    // still need {}

        void print() const {cout << "Expiry: " << T << ", Strike: " << K << endl;};

};