#pragma once
#ifndef GOOSEADPATER_H
#define GOOSEADPATER_H
#include"Goose.h"
#include"Quackable.h"
//�������������������Ѽ,������ģʽ
class GooseAdpater :public Quackable {
private:
	Goose* goose;
public:
	GooseAdpater() = default;
	GooseAdpater(Goose* goose);
	void quack() override;
};
#endif // !GOOSEADPATER_H
