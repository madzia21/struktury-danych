#include "matematyka.hpp"
#include <iostream>
// podejście iteracyjne
int NWD_Euklides::findNWD()
{
	while (_x != _y)
	{
		if (_x > _y)
		{
			_x -= _y;
		}
		else
			_y -= _x;
	}
	return _x;
}
int NWD_Euklides::findNWD_rekurencja(int x, int y)
{
	if (x != y)
		return findNWD_rekurencja(x > y ? x - y : x, y > x ? y - x : y);
	return x;
}
NWD_Euklides::~NWD_Euklides()
{
}
// 28, 24
// 28 > 24 -> 28-24 = 4, 24 > 28 -> 24 (4,24)
// 4, 24
// 4 > 24 -> 4, 24 > 4 -> 20 (4,20)
// 4, 20
// 4 > 20 -> 4, 20 >4 -> 16 (4,16)
// 4, 16
// 4, 12
// 4, 8
// 4, 4
// 4 == 4
// return 4

int NWD_Modulo::findNWD()
{
	int temp = 0;
	// nie można dzielić przez zero
	while (_y != 0)
	{
		// zapamietanie dzielnika w zmiennej tymczasowej
		temp = _y;
		// przypisannie reszty z dzielenia do dzielnika
		_y = _x % _y;
		// poprzedni dzielnik staje się dzielną
		_x = temp;
	}
	return _x;
}
int NWD_Modulo::findNWD_rekurencja(int x, int y)
{
	if (y != 0)
	{
		return findNWD_rekurencja(y, x % y);
	}
	return x;
}
NWD_Modulo::~NWD_Modulo()
{
}
int NWW::findNWD_najprostszy_algorytm()
{
	while (_y)
		std::swap(_x %= _y, _y);
	return _x;
}
int NWW::findNWW()
{
	return ((_x * _y) / findNWD_najprostszy_algorytm());
}