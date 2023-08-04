#pragma once
#ifndef COUNTINGDUCKFACTORY_H
#define COUNTINGDUCKFACTORY_H
#include"AbstractDuckFactory.h"
#include"DuckCall.h"
#include"MallarDuck.h"
#include"Quackable.h"
#include"RedheadDuck.h"
#include"RubberDuck.h"
#include"Goose.h"
#include"GooseAdapter.h"
#include"QuackCount.h"
class CountingDuckFactory :public AbstractDuckFactory {
public:
     Quackable* createMallardDuck() override;
     Quackable* createRedHeadDuck() override;
     Quackable* createDuckCall() override;
     Quackable* createRubberDuck() override;
};
#endif // !COUNTINGDUCKFACTORY_H
