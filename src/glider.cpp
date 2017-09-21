#include <iostream>
#include <stdlib.h>
#include <unistd.h>

#include "glider.hpp"

using namespace std;

Glider::Glider(){}

Glider::~Glider(){}

void Glider::setIteracoes(){
  int itera;
  cout << "Digite o numero de itercaoes:"<<endl;
  cin >> itera;

  this->itera = itera;
}

int Glider::getIteracoes(){
  return itera;
}

void Glider::glider(){

  int i;

  for (linha = 0; linha < 15; linha++){
      for (coluna = 0; coluna < 15; coluna++){
          setMAtriz(linha,coluna,'.');
          setMAtrizreserva(linha, coluna, '.');
      }
  }

  setMAtriz(0,1,'x');
  setMAtriz(1,2,'x');
  setMAtriz(2,0,'x');
  setMAtriz(2,1,'x');
  setMAtriz(2,2,'x');

  for(i = 0; i < 54; i ++){
    system("clear");
    implementa(15,15);
    imprimecolarMatriz(15,15);
    colarMatriz();
    usleep(200000);
  }

}

void Glider::glider(int linha_add, int coluna_add){
int i;

  setIteracoes();

  for (linha = 0; linha < 40; linha++){
      for (coluna = 0; coluna < 60; coluna++){
          setMAtriz(linha,coluna,'.');
          setMAtrizreserva(linha, coluna, '.');
      }
  }

  setMAtriz(0 +linha_add,1 + coluna_add,'x');
  setMAtriz(1 +linha_add,2 + coluna_add,'x');
  setMAtriz(2 +linha_add,0 + coluna_add,'x');
  setMAtriz(2 +linha_add,1 + coluna_add,'x');
  setMAtriz(2 +linha_add,2 + coluna_add,'x');

  for(i = 0; i < getIteracoes(); i ++){

    system("clear");
    implementa(40,60);
    imprimecolarMatriz(40,60);
    cout << "ITERAÇÕES: " << i+1 <<  endl;
    colarMatriz();
    usleep(200000);
  }

}
