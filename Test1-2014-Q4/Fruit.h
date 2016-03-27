#pragma once
#ifndef FRUIT_H
#define FRUIT_H
#include <string>

using namespace std;

class Fruit
{
protected: string nameFruit, colourFruit;

public:
	Fruit();
	~Fruit();
	virtual void name() = 0;
	virtual void colour() = 0;
};

class Apple : public Fruit
{
public: Apple();
		~Apple();
		void name();
		void colour();
};

class Orange : public Fruit
{
public: Orange();
		~Orange();
		void name();
		void colour();
};

class Banana : public Fruit
{
public: Banana();
		~Banana();
		void name();
		void colour();
};

#endif