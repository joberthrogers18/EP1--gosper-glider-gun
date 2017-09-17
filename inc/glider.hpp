#ifndef GLIDER_HPP
#define GLIDER_HPP

#include "vetor-bidimensional.hpp"

using namespace std;

class Glider : public Vetor{

  int itera;
public:
  Glider();

  void setIteracoes();
  int getIteracoes();
  void glider();
  void glider(int linha, int coluna);


};

#endif
