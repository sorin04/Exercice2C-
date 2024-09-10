#include <iostream>
#include <iomanip>

int main() {

    double fahrenheit, celsisus;

	for (fahrenheit =0;fahrenheit <=212; fahrenheit++)
	{
		celsisus = 5.0 / 9.0 * (fahrenheit - 32);
		std::cout << fahrenheit << "°F = " << std::fixed << std::setprecision(3) << celsisus << "°C" << std::endl;

	}
	return 0;


}

    
