#ifndef RABBIT_H
#define RABBIT_H

#include<iostream>
#include<cstdlib>
using namespace std;
class Rabbit
{
private:
	int xpos, ypos;
	int lifetime;
	char c;

public:
		Rabbit();
		void move();
		void breed();
}

Rabbit::Rabbit()
{	
	srand(time(NULL));
	xpos = rand()%20;
	ypos = rand()%20;
	lifetime = 0;
}

void Rabbit::move()
{
beginning:
	srand(time(NULL));
	int i = rand()%4;

	switch(i)
	{
		case 0:
		{
			if(xpos==0)
				goto beginning;
			else
				xpos--;
		}break;
		case 1:
		{
			if(xpos==19)
				goto beginning;
			else
				xpos++;
		}break;
		case 2:
		{
			if(ypos==0)
				goto beginning;
			else
				ypos--;
				
		}
