#ifndef GLIDER_GUN_HPP
#define GLIDER_GUN_HPP

#include "vetor-bidimensional.hpp"

class Glidergun: public Vetor{
public:
  int itera;

public:
  Glidergun();

  void glidergun();
  void setIteracoes();
  int getIteracoes();

};

#endif
