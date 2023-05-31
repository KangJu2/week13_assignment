#pragma once
#include "ani.h"
class fish : public animal {
public:
	fish() { nGills = 2; };
	int nGills;
	void swim() { std::cout << " I swim \n"; }
};