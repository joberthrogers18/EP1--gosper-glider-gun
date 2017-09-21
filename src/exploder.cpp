#include <iostream>
#include <stdlib.h>
#include <unistd.h>

#include "exploder.hpp"

using namespace std;

Exploder::Exploder(){}

Exploder::~Exploder(){}

void Exploder::setIteracoes(){
  int itera;
  cout << "Digite o numero de itercaoes:"<<endl;
  cin >> itera;

  this->itera = itera;
}


int Exploder::getIteracoes(){
  return itera;
}


void Exploder::exploder(){

  int i;

  setIteracoes();

  for (linha = 0; linha < 20; linha++){
      for (coluna = 0; coluna < 40; coluna++){
          setMAtriz(linha,coluna,'.');
          setMAtrizreserva(linha, coluna, '.');
      }
  }


      setMAtriz(1+7,1+5,'x');
      setMAtriz(2+7,1+5,'x');
      setMAtriz(3+7,1+5,'x');
      setMAtriz(4+7,1+5,'x');
      setMAtriz(5+7,1+5,'x');
      setMAtriz(1+7,3+5,'x');
      setMAtriz(5+7,3+5,'x');
      setMAtriz(1+7,5+5,'x');
      setMAtriz(2+7,5+5,'x');
      setMAtriz(3+7,5+5,'x');
      setMAtriz(4+7,5+5,'x');
      setMAtriz(5+7,5+5,'x');

      setMAtriz(1+7,1+26,'x');
      setMAtriz(2+7,1+26,'x');
      setMAtriz(3+7,1+26,'x');
      setMAtriz(4+7,1+26,'x');
      setMAtriz(5+7,1+26,'x');
      setMAtriz(1+7,3+26,'x');
      setMAtriz(5+7,3+26,'x');
      setMAtriz(1+7,5+26,'x');
      setMAtriz(2+7,5+26,'x');
      setMAtriz(3+7,5+26,'x');
      setMAtriz(4+7,5+26,'x');
      setMAtriz(5+7,5+26,'x');

  for(i = 0; i < getIteracoes(); i ++){
    system("clear");
    implementa(20,40);
    imprimecolarMatriz(20,40);
    cout << "ITERAÇÕES: " << i+1 << endl;
    colarMatriz();
    usleep(200000);
  }

}

void Exploder::exploder(int linha_add, int coluna_add){
int i;

  setIteracoes();

  for (linha = 0; linha < 40; linha++){
      for (coluna = 0; coluna < 60; coluna++){
          setMAtriz(linha,coluna,'.');
          setMAtrizreserva(linha, coluna, '.');
      }
  }

  setMAtriz(0+linha_add,0+coluna_add,'x');
  setMAtriz(1+linha_add,0+coluna_add,'x');
  setMAtriz(2+linha_add,0+coluna_add,'x');
  setMAtriz(3+linha_add,0+coluna_add,'x');
  setMAtriz(4+linha_add,0+coluna_add,'x');
  setMAtriz(0+linha_add,2+coluna_add,'x');
  setMAtriz(4+linha_add,2+coluna_add,'x');
  setMAtriz(0+linha_add,4+coluna_add,'x');
  setMAtriz(1+linha_add,4+coluna_add,'x');
  setMAtriz(2+linha_add,4+coluna_add,'x');
  setMAtriz(3+linha_add,4+coluna_add,'x');
  setMAtriz(4+linha_add,4+coluna_add,'x');

  for(i = 0; i < getIteracoes(); i ++){
    system("clear");
    implementa(40,60);
    imprimecolarMatriz(40,60);
    cout << "ITERAÇÕES: " << i+1 << endl;
    colarMatriz();
    usleep(200000);
  }

}
