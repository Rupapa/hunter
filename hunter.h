#ifndef RABBIT_H
#define RABBIT_H

class Rabbit
{
	private:
	int xpos, ypos;
	int lifetime;
	static int t_all=0;
	static int t_dead=0;
	int strong1;	//ignore!
	int strong2;	//ignore!
	
  
	public:
	void move();
	Rabbit* breed();
}
#endif
