#ifndef TIGER_H
#define TIGER_H

class Tiger
{
	private:
	int xpos, ypos;
	int lifetime;
	static int t_all, t_dead;
	int isStrong;	//ignore!
  
	public:
	void move();
	void starve();
	Tiger* breed();

	int detect(char* field[20][20]);
	void hunt_rabbit(int pos, Rabbit* r);
	
}
#endif

int detect(char* field[20][20])
{
	
