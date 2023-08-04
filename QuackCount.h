#pragma once
#ifndef QUACKCOUNT_H
#define QUACKCOUNT_H
#include"Quackable.h"
//װ����ģʽ
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