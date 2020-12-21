// TestEurpeanOption

#include <iostream>
#include "EurpeanOption.h"


int main()
{
	// 
	EurpeanOption callOption;
	cout << "Call option on a stock: " << callOption.Price() << endl;

	EurpeanOption indexOption;
	cout << "Call option price on index originally: " << indexOption.Price() << endl;
	// modify memeber data
	indexOption.optType = "P"; 
	indexOption.U = 100.0; 
	indexOption.K = 95.0; 
	indexOption.T = 0.5; 
	indexOption.r = 0.10; 
	indexOption.sig = 0.20; 
	double q = 0.05;     // Dividend yield
	indexOption.b = indexOption.r - q;
	cout << "Put option on index after modification: " << indexOption.Price() << "; type: " << indexOption.optType << endl;

	indexOption.toggle();
	cout << "option on index after toggling: " << indexOption.Price() << "; type: " << indexOption.optType << endl;

	return 0;

}

