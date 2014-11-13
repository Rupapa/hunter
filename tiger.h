#ifndef TIGER_H
#define TIGER_H

class Tiger
{
  private:
  int xpos, ypos;
  int lifetime;
  static int allTiger, allDeadTiger;
  
  public:
  void move();
  Tiger* breed();
  int detect_rabbit(char* field[20][20]);
  void hunt_rabbit(int pos, Rabbit* r);
  void starve();
}
#endnif

int Tiger::detect_rabbit(char* field[20][20])
{
  if(field[xpos-1][ypos]=='R')
    return 0;
  else if(field[xpos+1][ypos]=='R')
    return 1;
  else if(field[xpos][ypos-1]=='R')
    return 2;
  else if(field[xpos][ypos+1]=='R')
    return 3;
  else
    return 4;
}

void hunt_rabbit(int pos, Rabbit* r)


Rabbit* Tiger::findRabbitAdress(Rabbit* r ,char* field[20][20])
{
  for(int i=0; i<r_all; i++)
    if(r->xpos==this->xpos || r->ypos==
}
