#include <iostream>
#include "vetor-bidimensional.hpp"

using namespace std;

//construtor
Vetor::Vetor(){
  linha = 20;
  coluna = 38;
}

void Vetor::setMAtriz(int linha, int coluna, char valor){
  matriz[linha][coluna] = valor;
}

void Vetor::setColuna(int m_coluna){
  coluna = m_coluna;
}

int Vetor::getColuna(){
  return coluna;
}

void Vetor::setLinha(int m_linha){
 linha = m_linha;
}

int Vetor::getLinha(){
  return linha;
}

 int Vetor::verificar_vivos(int linha, int coluna){
	 int vivo=0;
     int i,j;
     for(i = linha -1; i < linha + 2; i++){
         for(j = coluna -1; j < coluna + 2; j++){
             if(matriz[i][j] == 'X'){
                 vivo = vivo + 1;
             }
         }
     }
    return vivo;
 }

void Vetor::implementa(){
  int linha, coluna, numero_vivos;

  for (linha = 1; linha < 19; linha++){
      for (coluna = 1; coluna < 37; coluna++){
          numero_vivos = verificar_vivos(linha, coluna);
          if(matriz[linha][coluna] == getVivo()){
            numero_vivos = numero_vivos - 1;
          }
          matriz_reserva[linha][coluna] = verificarVida(linha,coluna,matriz[linha][coluna], numero_vivos);
      }
      cout << endl;
  }
}

void Vetor::imprimeMatriz(){

  for(linha=0 ; linha<  20; linha++){
    for(coluna=0; coluna< 38; coluna++){
      if(matriz[linha][coluna] == 'X'){
        cout << getVivo() << " ";
      }
      else{
        cout << getMorto() << " ";
      }
    }
    cout << endl;
  }
}

void Vetor::colarMatriz(){
  for(linha = 0 ; linha <  20; linha++){
    for(coluna = 0; coluna < 38; coluna++){
        matriz[linha][coluna] = matriz_reserva[linha][coluna];
    }
  }
}


void Vetor::imprimecolarMatriz(){

  for(linha=0 ; linha <  20; linha++){
    for(coluna=0; coluna< 38; coluna++){
      if(matriz_reserva[linha][coluna] == getVivo()){
        cout << getVivo() << " ";
      }
      else{
        cout << getMorto() << " ";
      }
    }
    cout << endl;
  }
}
