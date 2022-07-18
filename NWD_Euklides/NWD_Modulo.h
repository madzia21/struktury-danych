#pragma once
#include "NWD_Euk.hpp"
class NWD_Modulo : public NWWandNWD
{
private:
	int x, y;
public:
	NWD_Modulo(int _x, int _y) : NWWandNWD(_x, _y) {}
	virtual int findNWD() override;
	int findNWD_rekurencja(int x, int y);
	
};

