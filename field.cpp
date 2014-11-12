#include<rabbit.h>
#include<tiger.h>
#include<hunter.h>

class Field
{
	
friend class Rabbit;
friend class Hunter;
friend class Tiger;

private:
	char box[20][20];
	int turn;
public:
	Field()
	{
		for(int i=0; i<20; i++)
			for(int j=0; i<20; j++)
				box[i][j] = '-';
	}
	int checkwhat(int xpos, int ypos)
	{
		if(box[xpos][ypos]=='-')
			return 1;
		else if(box[xpos][ypos]=='R')
			return 2;
		else if(bos[xpos][ypos]=='T')
			reutrn 3;
		else if(bos[xpos][ypos]=='H')
			reutrn 4;
	}
