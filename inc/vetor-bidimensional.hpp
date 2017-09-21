#ifndef VETOR_BIDIMENCIONAL_HPP
#define VETOR_BIDIMENCIONAL_HPP

using namespace std;

class Vetor{
protected:
  int linha;
  int coluna;
  char matriz[60][60];
  char matriz_reserva[60][60];
  char vivo;
  char morto;


public:
  Vetor();
  ~Vetor();

  void setMAtriz(int linha,int coluna, char valor);
  void setMAtrizreserva(int linha,int coluna, char valor);
  char getVivo();
  char getMorto();
  virtual void setIteracoes() = 0;


  char verificarVida(int linha, int coluna,char valor, int vivos);
  int verificar_vivos(int ultimo_linha, int ultimo_coluna,int i, int j, char valor);
  void implementa(int linha, int coluna);
  void colarMatriz();
  void imprimecolarMatriz(int linha, int coluna);


};

#endif
