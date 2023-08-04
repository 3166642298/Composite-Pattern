#pragma once
#pragma once
#ifndef AGGREGATE_H
#define AGGREGATE_H
#include<iostream>
#include"Iterator.h"
using namespace std;
class Aggregate {
public:
	virtual Iterator* createIterator();
	virtual ~Aggregate();
};
#endif // !AGGREGATE_H
