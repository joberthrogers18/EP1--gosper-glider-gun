#ifndef VETOR_BIDIMENCIONAL_HPP
#define VETOR_BIDIMENCIONAL_HPP

#include "vivo_morto.hpp"

using namespace std;

class Vetor : public Vivo{
private:
  int coluna;
  int linha;
  int contador;
  char matriz[20][38];
  char matriz_reserva[20][38];

public:
  Vetor();


  int getColuna();
  void setColuna(int coluna);
  int getLinha();
  void setLinha(int linha);
  char getMatriz();
  void  setMatriz();
  char setMatrizreserva();
  void getMatrizreserva();

  void imprimeMatriz();
  void colarMatriz();
  void Padrao();
  void imprimecolarMatriz();


};

#endif
