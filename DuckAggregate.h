#pragma once
#ifndef DUCKAGGREGATE_H
#define DUCKAGGREGATE_H
#include"Aggregate.h"
#include"Iterator.h"
#include<vector>
#include"DuckIterator.h"
class DuckIterator;
class DuckAggregate :public Aggregate {
private:
	vector<Quackable*> AllDuck;
public:
	int getCount();
	Quackable* getItem(int index);
	void addItem(Quackable* menuItem);
	Iterator* createIterator() override;
};
#endif // !DUCKAGGREGATE_H
