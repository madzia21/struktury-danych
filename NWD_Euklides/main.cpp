#include <iostream>
#include "matematyka.hpp"

int main()
{
	// największy wspólny dzielnik
	Matematyka* object1 = new NWD_Euklides(24, 28);
	std::cout << object1->findNWD() << std::endl;
	object1 = new NWD_Modulo(24,28);
	std::cout << object1->findNWD() << std::endl;
	delete object1;
	
	NWD_Modulo object2(12, 6);
	std::cout << object2.findNWD() << std::endl;

	// największa wspólna wielokrotność
	NWW object3(5, 10);
	std::cout << object3.findNWW() << std::endl;

	return 0;
}