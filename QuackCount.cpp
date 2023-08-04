#include "QuackCount.h"
int QuackCount::numberOfQuacks = 0;
QuackCount::QuackCount(Quackable* duck)
{
	this->duck = duck;
}

void QuackCount::quack()
{
	duck->quack();
	this->numberOfQuacks++;
}

int QuackCount::getQuacks()
{
	return numberOfQuacks;
}
