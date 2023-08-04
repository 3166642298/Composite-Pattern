#pragma once
#ifndef QUACKCOUNT_H
#define QUACKCOUNT_H
#include"Quackable.h"
//装饰者模式
class QuackCount :public Quackable {
private:
	Quackable* duck;
	static int numberOfQuacks;
public:
	QuackCount() = default;
	QuackCount(Quackable* duck);
	void quack() override;
	static int getQuacks();
};
#endif