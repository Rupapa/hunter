#include"tiger.h"
extern char field[20][20]

Tiger::Tiger()
{	
	srand(time(NULL));
	xpos = rand()%20;
	ypos = rand()%20;
	lifetime = 0;
}

void Tiger::move()
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
		}break;
		case 3:
		{
		  if(ypos==19)
		    goto beginning;
		  else
		    ypos++;
		}break;
	}
}

void Tiger::starve()
{
  if(starveTime==2)
    delete this;
    return;
}
Tiger* Tiger::breed()
{
  if(lifetime%3==2)
    Tiger* t = new Tiger;
    return t;
}


int Tiger::detect_rabbit(char* field[20][20])
{
	if(field[xpos-1][ypos]=='R')
	{	xpos--;
		return 0;
	}	 	
	else if(field[xpos+1][ypos]=='R')
	{	xpos++;		
		return 1;
	}
	else if(field[xpos][ypos-1]=='R')
	{	ypos--;
		return 2;
	}
	else if(field[xpos][ypos+1]=='R')
	{	return 3;
		ypos++;
	}
	else
		return 4;
}

if(fsdf==0, 1, 2, 3)
	hunt_rabbit();
else
	move();



void Tiger::hunt_rabbit(int pos, Rabbit* r[])

Rabbit* detectRabbitAdr
{
	for(int i=0; i<Rabbit::r_all; i++)
		if(r[i]->xpos==this.xpos && r[i]->ypos==this.ypos)
			 r+i;
