#ifndef RABBIT_H
#define RABBIT_H

class Rabbit
{
	private:
	int xpos, ypos;
	int lifetime;
	static int r_all, r_dead;
  
	public:
	Rabbit();
	void move();
	Rabbit* breed();
}
#endif

