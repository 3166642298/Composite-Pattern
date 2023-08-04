#include<iostream>
#include"DuckCall.h"
#include"MallarDuck.h"
#include"Quackable.h"
#include"RedheadDuck.h"
#include"RubberDuck.h"
#include"DuckSimulator.h"
using namespace std;
int main()
{
	DuckSimulator* duckSimulate = new DuckSimulator();
	duckSimulate->simulate();
	delete duckSimulate;
	return 0;
}