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
		Rabbit(int x, int y, int life)
			:xpos(x), ypos(y), lifetime(life), c('R')	{}
		void move();
		void breed();
}

void Rabbit::move()
{
	srand(time(NULL));
	int i = rand()%4;

	switch(i)
	{
		case 0: xpos++;
		case 1: xpos--;
