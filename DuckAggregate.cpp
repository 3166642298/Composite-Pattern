#include "DuckAggregate.h"

int DuckAggregate::getCount()
{
    return this->AllDuck.size();
}

Quackable* DuckAggregate::getItem(int index)
{
    return this->AllDuck[index];
}

void DuckAggregate::addItem(Quackable* menuItem)
{
    this->AllDuck.push_back(menuItem);
}

Iterator* DuckAggregate::createIterator()
{
    return new DuckIterator(this);
}
