#ifndef VETOR_BIDIMENCIONAL_HPP
#define VETOR_BIDIMENCIONAL_HPP

#include "vivo_morto.hpp"

using namespace std;

class Vetor : public Vivo{
protected:
  int coluna;
  int linha;
  char matriz[20][38];
  char matriz_reserva[20][38];

public:
  Vetor();

  int getColuna();
  void setColuna(int coluna);
  int getLinha();
  void setLinha(int linha);
  void setMAtriz(int linha,int coluna, char valor);

  int verificar_vivos(int i, int j);
  void implementa();
  void imprimeMatriz();
  void colarMatriz();
  void imprimecolarMatriz();


};

#endif
