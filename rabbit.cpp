class Rabbit
{
  private:
  int xpos, ypos;
  int lifetime;
  
  public:
  void move();
  void breed();
}

void Rabbit::move
{
  int n;
  srand(seed(NULL));
check:  
  n = rand()%4;
  
  switch(n)
  {
    case 0:
    {
      if (xpos==0)
      goto check;
      else
      xpos--;
    }break;
    case 1:
    {
      if(xpos==19)
      goto check;
      else
      xpos++;
    }break;
    case 2:
    {
      if(ypos==0)
      goto check;
      else
      ypos--;
    }break;
    case 3:
    {
      if(ypos==20)
      goto check;
      else
      ypos++;
    }break;
  }
}

void Rabbit::breed()
{
  if(lifetime%3==2)
  int 
}
