// EurpeanOption.h

// contains declaration of Eurpean class


#include <string>
#include <math.h>

using namespace std;

class EurpeanOption
{
    private:          // private data and function

        void init();        // initialize all default value
        void copy(const EurpeanOption& o2);

        // core fuctions for option calculation
        double CallPrice() const;
        double PutPrice() const;
        double CallDelta() const;
        double PutDelta() const;

    public:           // public data

        double r;
        double sig;
        double K;
        double T;
        double U;
        double b;
        string optType; 

    public:           // public function

        // Constructor
        EurpeanOption();    // defualt call option
        EurpeanOption(const EurpeanOption& option2);     // copy constructor
        EurpeanOption(const string& optionType);         // create option type

        // Destructor
        virtual ~EurpeanOption();

        // Assign operator
        EurpeanOption& operator = (const EurpeanOption& option2);

        //Calculation functions
        double Price() const;
        double Delta() const;

        // Modifier functions
        void toggle();         // change option type
        
};

double N(const double& x);