#include "CountingDuckFactory.h"

Quackable* CountingDuckFactory::createMallardDuck()
{
    return new QuackCount(new MallarDuck());
}

Quackable* CountingDuckFactory::createRedHeadDuck()
{
    return new QuackCount(new RedHeadDuck());
}

Quackable* CountingDuckFactory::createDuckCall()
{
    return new QuackCount(new DuckCall());
}

Quackable* CountingDuckFactory::createRubberDuck()
{
    return new QuackCount(new RubberDuck());
}
