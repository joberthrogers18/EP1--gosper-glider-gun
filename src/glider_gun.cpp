#include <iostream>
#include <stdlib.h>
#include <unistd.h>

#include "glider_gun.hpp"
using namespace std;

Glidergun::Glidergun(){}

void Glidergun::setIteracoes(){
  int itera;
  cout << "Digite o numero de itercaoes:"<<endl;
  cin >> itera;

  this->itera = itera;
}

int Glidergun::getIteracoes(){
  return itera;
}

void Glidergun::glidergun(){
int iteracoes,loop;

setIteracoes();

iteracoes = getIteracoes();

  for (linha = 0; linha < 40 ; linha++){
      for (coluna = 0; coluna < 60; coluna++){
          setMAtriz(linha,coluna,'.');
      }
  }

    setMAtriz(2+5,7+1,'x');
    setMAtriz(2+6,7+1,'x');
    setMAtriz(2+5,7+2,'x');
    setMAtriz(2+6,7+2,'x');
    setMAtriz(2+5,7+11,'x');
    setMAtriz(2+6,7+11,'x');
    setMAtriz(2+7,7+11,'x');
    setMAtriz(2+4,7+12,'x');
    setMAtriz(2+8,7+12,'x');
    setMAtriz(2+3,7+13,'x');
    setMAtriz(2+9,7+13,'x');
    setMAtriz(2+3,7+14,'x');
    setMAtriz(2+9,7+14,'x');
    setMAtriz(2+6,7+15,'x');
    setMAtriz(2+4,7+16,'x');
    setMAtriz(2+8,7+16,'x');
    setMAtriz(2+5,7+17,'x');
    setMAtriz(2+6,7+17,'x');
    setMAtriz(2+7,7+17,'x');
    setMAtriz(2+6,7+18,'x');
    setMAtriz(2+3,7+21,'x');
    setMAtriz(2+4,7+21,'x');
    setMAtriz(2+5,7+21,'x');
    setMAtriz(2+3,7+22,'x');
    setMAtriz(2+4,7+22,'x');
    setMAtriz(2+5,7+22,'x');
    setMAtriz(2+2,7+23,'x');
    setMAtriz(2+6,7+23,'x');
    setMAtriz(2+1,7+25,'x');
    setMAtriz(2+2,7+25,'x');
    setMAtriz(2+6,7+25,'x');
    setMAtriz(2+7,7+25,'x');
    setMAtriz(2+3,7+35,'x');
    setMAtriz(2+4,7+35,'x');
    setMAtriz(2+3,7+36,'x');
    setMAtriz(2+4,7+36,'x');

    for(loop = 0; loop < iteracoes; loop++){
      system("clear");
      implementa(40,60);
      imprimecolarMatriz(40,60);
      cout << "ITERAÇÕES: " << loop+1 << endl;
      colarMatriz();
      usleep(200000);

    }

}
