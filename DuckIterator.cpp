#include "DuckIterator.h"

DuckIterator::DuckIterator(DuckAggregate* aggregate)
{
	this->currentIndex = 0;
	this->duckAggregate = aggregate;
}

Quackable* DuckIterator::next()
{
	this->currentIndex++;
	return this->duckAggregate->getItem(this->currentIndex-1);
}

bool DuckIterator::hasNext()
{
	return (this->currentIndex >= this->duckAggregate->getCount()) ? false : true;
}

void DuckIterator::showItem(Quackable* duck)
{
	duck->quack();
}
