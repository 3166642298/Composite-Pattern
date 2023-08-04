#include "DuckSimulator.h"

void DuckSimulator::simulate()
{
	AbstractDuckFactory* duckFactory = new CountingDuckFactory();
	Quackable* mallardDuck =duckFactory->createMallardDuck();
	Quackable* redheadDuck =duckFactory->createRedHeadDuck();
	Quackable* duckCall = duckFactory->createDuckCall();
	Quackable* rubberDuck =duckFactory->createRubberDuck();
	Quackable* gooseDuck = new GooseAdpater(new Goose());
	DuckAggregate* duckAggregate = new DuckAggregate();
	duckAggregate->addItem(mallardDuck);
	duckAggregate->addItem(redheadDuck);
	duckAggregate->addItem(duckCall);
	duckAggregate->addItem(rubberDuck);
	duckAggregate->addItem(gooseDuck);
	Iterator* it = duckAggregate->createIterator();
	while (it->hasNext()==true)
	{
		it->showItem(it->next());
	}
	cout <<QuackCount::getQuacks() << endl;
	delete mallardDuck;
	delete redheadDuck;
	delete duckCall;
	delete rubberDuck;
	delete gooseDuck;
}

void DuckSimulator::simulate(Quackable* duck)
{
	duck->quack();
}
