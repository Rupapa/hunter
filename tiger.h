#ifndef TIGER_H
#define TIGER_H

class Rabbit
{
  private:
  int xpos, ypos;
  int lifetime;
  static int allTiger, allDeadTiger;
  
  public:
  void move();
  Tiger* breed();
  void starve();
}
#endnif
