#include"rabbit.h"
extern char field[20][20];

Rabbit::Rabbit()
{	
	r_all++;
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

Rabbit* Rabbit::breed()
{
  if(lifetime%3==2)
    Rabbit* r = new rabbit;
    return r;
}

