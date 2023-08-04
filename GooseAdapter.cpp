#include "GooseAdapter.h"

GooseAdpater::GooseAdpater(Goose* goose)
{
	this->goose = goose;
}

void GooseAdpater::quack()
{
	this->goose->honk();
}
