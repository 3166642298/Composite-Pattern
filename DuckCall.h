#pragma once
#ifndef DUCKCALL_H
#define DUCKCALL_H
#include"Quackable.h"
class DuckCall :public Quackable {
public:
	void quack() override;
};
#endif // !DUCKCALL_H
