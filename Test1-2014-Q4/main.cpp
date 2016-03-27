#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include "Fruit.h"

using namespace std;

int main()
{
	Apple a;
	Banana b;
	Orange c;

	Fruit *f[3];

	a.name();
	a.colour();

	b.name();
	b.colour();

	c.name();
	c.colour();

	cout << "Demo of polymorphism" << endl;

	//Fill out the array
	f[0] = &a;
	f[1] = &b;
	f[2] = &c;

	//Demo of polymorphism using array pointer of abstract class
	for (int i = 0; i < 3; i++)
	{
		f[i]->name();
		f[i]->colour();
	}

	system("PAUSE");
	return 0;
}