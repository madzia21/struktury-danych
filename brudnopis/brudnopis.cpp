#include <iostream>

int main()
{
	int* x = nullptr;
	std::cout << x;
	std::cout << std::endl;
	std::cout << &x;
	std::cout << std::endl;
	int* y = new int;
	std::cout << y;
	y = nullptr;
	std::cout << std::endl;
	x = y;
	std::cout << x;
	std::cout << std::endl;
	std::cout << y;
	std::cout << std::endl;
	std::cout << std::endl;
	int* a = nullptr;
	std::cout << a << std::endl;
	int b = 5;
	a = &b;

}