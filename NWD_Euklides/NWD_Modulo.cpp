#include "NWD_Modulo.h"


int NWD_Modulo::findNWD()
{
	int temp = 0;
	// nie można dzielić przez zero
	while (y != 0)
	{
		// zapamietanie dzielnika w zmiennej tymczasowej
		temp = y;
		// przypisannie reszty z dzielenia do dzielnika
		y = x % y;
		// poprzedni dzielnik staje się dzielną
		x = temp;
	}
	return x;
}
int NWD_Modulo::findNWD_rekurencja(int x, int y)
{
	if (y != 0)
	{
		return findNWD_rekurencja(y, x % y);
	}
	return x;
}