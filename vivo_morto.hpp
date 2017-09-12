#ifndef VIVO_MORTO_HPP
#define VIVO_MORTO_HPP

using namespace std;

class Vivo
{
private:
  char vivo;
  char morto;

public:
  Vivo();

  char getVivo();
  void setVivo();
  char getMorto();
  void setMorto();

  char verificarVida(int linha, int coluna,char valor, int vivos);

};

#endif
