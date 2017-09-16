#ifndef EXPLODER_HPP
#define EXPLODER_HPP

#include "vetor-bidimensional.hpp"

class Exploder: public Vetor{
public:
  int itera;

public:
  Exploder();

  void exploder();
  void exploder(int linha, int coluna);
  void setIteracoes();
  int getIteracoes();

};

#endif
