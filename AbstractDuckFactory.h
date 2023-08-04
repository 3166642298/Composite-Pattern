#pragma once
#ifndef ABSTRACTDUCKFACTORY_H
#define ABSTRACTDUCKFACTORY_H
#include"Quackable.h"
class AbstractDuckFactory {
public:
	virtual Quackable* createMallardDuck();
	virtual Quackable* createRedHeadDuck();
	virtual Quackable* createDuckCall();
	virtual Quackable* createRubberDuck();
};
#endif 