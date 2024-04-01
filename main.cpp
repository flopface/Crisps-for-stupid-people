#include <iostream>
#include "classes.h"
#include <vector>

int main()
{
  Crisps c(2, 4, 3);
  c.print();
  std::cout<<std::endl;

  Pringles p(4, 2, 5, 1);
  p.print();
  std::cout<<std::endl;

  Wotsits w(9, 9, 0, 8);
  w.print();
  w.eat(2);
  w.print();
  std::cout<<std::endl;

  std::vector<Crisps*> multipack;
  multipack.push_back(&p);
  multipack.push_back(&w);

  multipack[0]->print();
  multipack[1]->print();

  return 0;
}