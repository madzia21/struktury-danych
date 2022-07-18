#pragma once
// NWD: największa liczba naturalna dzieląca jednocześnie liczbę x i liczbę y.
class Matematyka
{
protected:
	int _x;
	int _y;
public:
	Matematyka(int x, int y) : _x(x), _y(y) {}
	virtual~Matematyka() {}
	virtual int findNWD() = 0;
};

class NWD_Euklides : public Matematyka
{
public:
	NWD_Euklides(int x, int y) : Matematyka(x, y) {}
	virtual~NWD_Euklides();
	// podejście iteracyjne
	int findNWD() override;
	// podejście rekurencyjne 
	int findNWD_rekurencja(int x, int y);
};

class NWD_Modulo : public Matematyka
{
public:
	NWD_Modulo(int x, int y) : Matematyka(x, y) {}
	virtual~NWD_Modulo();
	int findNWD() override;
	int findNWD_rekurencja(int x, int y);
};

class NWW
{
	// największa wspólna wielokrotność
private:
	int _x, _y;
public:
	NWW(int x, int y) : _x(x), _y(y) {}
	int findNWD_najprostszy_algorytm();
	int findNWW();
};
