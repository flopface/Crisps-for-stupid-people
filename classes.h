#ifndef CRISPS_H
#define CRISPS_H

#include <iostream>

class Crisps
{
private:
  double taste;
  int num_initial;

protected:
  int num_eaten;

public:
  Crisps();
  Crisps(double t, int i, int e);

  virtual void print() const;
  void eat(int n);
};




class Pringles : public Crisps
{
private:
  double tube_length;

public:
  Pringles();
  Pringles(double t, int i, int e, double l);

  void print() const override;
  double get_tube_length() const;
};




class Wotsits : public Crisps
{
private:
  double bag_size;

public:
  Wotsits();
  Wotsits(double t, int i, int e, double s);

  void print() const override;
  double get_bag_size() const;
};

#endif