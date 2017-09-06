#ifndef VETOR_BIDIMENCIONAL_HPP
#define VETOR_BIDIMENCIONAL_HPP

using namespace std;

class Vetor
{
private:
  int coluna;
  int linha;
  int contador;
  char matriz[20][38];

public:
  Vetor();


  int getColuna();
  void setColuna(int coluna);
  int getLinha();
  void setLinha(int linha);
  char getMatriz();
  void  setMatriz();

  void imprimeMatriz(int linha, int coluna);
  void Padrao();


};

#endif
