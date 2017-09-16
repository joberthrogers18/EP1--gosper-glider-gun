#ifndef VETOR_BIDIMENCIONAL_HPP
#define VETOR_BIDIMENCIONAL_HPP

//#include "vivo_morto.hpp"

using namespace std;

class Vetor{
protected:
  int coluna;
  int linha;
  char matriz[60][60];
  char matriz_reserva[60][60];
  char vivo;
  char morto;


public:
  Vetor();

  int getColuna();
  void setColuna(int coluna);
  int getLinha();
  void setLinha(int linha);
  void setMAtriz(int linha,int coluna, char valor);
  void setMAtrizreserva(int linha,int coluna, char valor);
  char getVivo();
  void setVivo();
  char getMorto();
  void setMorto();

  char verificarVida(int linha, int coluna,char valor, int vivos);
  int verificar_vivos(int ultimo_linha, int ultimo_coluna,int i, int j, char valor);
  void implementa(int linha, int coluna);
  void imprimeMatriz(int linha, int coluna);
  void colarMatriz();
  void imprimecolarMatriz(int linha, int coluna);


};

#endif
