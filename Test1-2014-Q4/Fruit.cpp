#include "Fruit.h"
#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>

using namespace std;

Fruit::Fruit()
{
	nameFruit = "any";
	colourFruit = "any";
}


Fruit::~Fruit()
{
}

Apple::Apple()
{
	nameFruit = "Apple";
	colourFruit = "red";
}

Apple::~Apple()
{

}

void Apple::name()
{
	cout << nameFruit << endl;
}

void Apple::colour()
{
	cout << colourFruit << endl;
}

Orange::Orange()
{
	nameFruit = "Orange";
	colourFruit = "orange";
}

Orange::~Orange()
{

}

void Orange::name()
{
	cout << nameFruit << endl;
}

void Orange::colour()
{
	cout << colourFruit << endl;
}

Banana::Banana()
{
	nameFruit = "Banana";
	colourFruit = "Yellow";
}

Banana::~Banana()
{

}

void Banana::name()
{
	cout << nameFruit << endl;
}

void Banana::colour()
{
	cout << colourFruit << endl;
}