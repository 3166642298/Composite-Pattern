#pragma once
#ifndef DUCKSIMULATOR_H
#define DUCKSIMULATOR_H
#include"DuckCall.h"
#include"MallarDuck.h"
#include"Quackable.h"
#include"RedheadDuck.h"
#include"RubberDuck.h"
#include"Goose.h"
#include"GooseAdapter.h"
#include"QuackCount.h"
#include"AbstractDuckFactory.h"
#include"CountingDuckFactory.h"
#include"Iterator.h"
#include"Aggregate.h"
#include"DuckAggregate.h"
#include"DuckIterator.h"
class DuckSimulator {
public:
	void simulate();
	void simulate(Quackable* duck);
};
#endif // !DUCKSIMULATOR_H
