#pragma once
#pragma once
#ifndef DUCKITERATOR_H
#define DUCKITERATOR_H
#include"Iterator.h"
#include"DuckAggregate.h"
class DuckAggregate;
class DuckIterator :public Iterator {
private:
	DuckAggregate* duckAggregate;
	int currentIndex;
public:
	DuckIterator() = default;
	DuckIterator(DuckAggregate* aggregate);
	Quackable* next() override;
	bool hasNext() override;
	void showItem(Quackable* duck) override;
};
#endif // !CONCRETEITERATOR_H
