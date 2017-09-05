#ifndef VETOR_BIDIMENCIONAL
#define VETOR_BIDIMENCIONAL

using namespace std;

class vetor
{
private:
  int coluna;
  int linha;
  int contador;

public:
  Vetor();

  ~Vetor();

  int getColuna();
  void setColuna(int coluna);
  int getLinha();
  void setLinha(int linha);
  int getContador();
  void  setContador(int contador);

  void imprimeMatriz();

};

#endif
