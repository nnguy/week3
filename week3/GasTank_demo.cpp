#include <iostream>
#include "GasTank.h"

using namespace std; 

int main() {
	GasTank g(4000); 
	double filled_amt = g.fillUp();

	//cout << g.getGasLevel(); 
	cout << filled_amt << endl; 
	return 0; 
}
