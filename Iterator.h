#pragma once
#pragma once
#ifndef ITERATOR_H
#define ITERATOR_H
#include<iostream>
#include"Quackable.h"
using namespace std;
class Iterator {
public:
	virtual Quackable* next();
	virtual bool hasNext();
	virtual void showItem(Quackable* menuItem);
};
#endif // !ITERATOR_H
