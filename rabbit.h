#ifndef RABBIT_H
#define RABBIT_H

class Rabbit
{
  private:
  int xpos, ypos;
  int lifetime;
  static int allRabbit, allDeadRabbit;
  
  public:
  void move();
  Rabbit* breed();
}
#endnif
