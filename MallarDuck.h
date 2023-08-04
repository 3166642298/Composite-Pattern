#pragma once
#ifndef MALLARDUCK_H
#define MALLARDUCK_H
#include"Quackable.h"
class MallarDuck :public Quackable {
public:
	void quack() override;
};
#endif // !MALLARDUCK_H
