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
  void setVivo(char vivo);
  void getMorto();
  void setMorto(vhar morto);


  void verificarVida(char valor, int vivos);


};

#endif
