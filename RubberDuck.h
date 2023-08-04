#pragma once
#ifndef RUBBERDUCK_H
#define RUBBERDUCK_H
#include"Quackable.h"
class RubberDuck :public Quackable {
public:
	void quack() override;
};
#endif // !RUBBERDUCK_H
