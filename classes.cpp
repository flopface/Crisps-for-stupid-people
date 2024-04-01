#include <iostream>
#include "classes.h"

Crisps::Crisps()
{
  taste = 0;
  num_initial = 0;
  num_eaten = 0;
}

Crisps::Crisps(double t, int i, int e)
{
  taste = t;
  num_initial = i;
  num_eaten = e;
}

void Crisps::print() const
{
  std::cout<<"Taste = "<<taste<<std::endl;
  std::cout<<"Initial number = "<<num_initial<<std::endl;
  std::cout<<"Number eaten = "<<num_eaten<<std::endl;
}

void Crisps::eat(int n)
{
  num_eaten+=n;
}

// -------------------------------------------------------------------

Pringles::Pringles() : Crisps{}
{
  tube_length = 0;
}

Pringles::Pringles(double t, int i, int e, double l) : Crisps{t, i, e}
{
  tube_length = l;
}

void Pringles::print() const
{
  std::cout<<"PRINGLES"<<std::endl;
  Crisps::print();
  std::cout<<"Tube length = "<<tube_length<<std::endl;
}

double Pringles::get_tube_length() const
{
  return tube_length;
}

// -------------------------------------------------------------------

Wotsits::Wotsits() : Crisps{}
{
  bag_size = 0;
}

Wotsits::Wotsits(double t, int i, int e, double s) : Crisps{t, i, e}
{
  bag_size = s;
}

void Wotsits::print() const
{
  std::cout<<"WOTSITS"<<std::endl;
  Crisps::print();
  std::cout<<"Bag size = "<<bag_size<<std::endl;
}

double Wotsits::get_bag_size() const
{
  return bag_size;
}