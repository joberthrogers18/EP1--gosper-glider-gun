#include <iostream>
#include "vetor-bidimensional.hpp"

using namespace std;

//construtor
Vetor::Vetor(){
  int coluna = 38;
  int linha = 20;
  char matriz[20][38];
  char matriz_reserva[30][38];

}

int Vetor::getColuna(){
  return coluna;
}

void Vetor::setColuna(int coluna){
  this->coluna = coluna;
}

int Vetor::getLinha(){
  return linha;
}

void Vetor::setLinha(int linha){
 this->linha = linha;
}
/*
int Vetor::getContador(){
  return contador;
}

void Vetor::setColuna(int contador){
  this
}

//char Vetor::getMatriz(){
  //return matriz[20][38];
//}

/*void Vetor::setMatriz(){
  int linha, coluna;
  this->matriz[20][38] = matriz[20][38];

  for (linha = 0; linha < 20; linha++){
      for (coluna = 0; coluna < 38; coluna++){
          matriz [linha][coluna] = false;
          //matriz_copia[linha][coluna] = '-';
      }
  }

  matriz[5][1] = true;
  matriz[6][1] = true;
  matriz[5][2] = true;
  matriz[6][2] = true;
  matriz[5][11] = true;
  matriz[6][11] = true;
  matriz[7][11] = true;
  matriz[4][12] = true;
  matriz[8][12] = true;
  matriz[3][13] = true;
  matriz[9][13] = true;
  matriz[3][14] = true;
  matriz[9][14] = true;
  matriz[6][15] = true;
  matriz[4][16] = true;
  matriz[8][16] = true;
  matriz[5][17] = true;
  matriz[6][17] = true;
  matriz[7][17] = true;
  matriz[6][18] = true;
  matriz[3][21] = true;
  matriz[4][21] = true;
  matriz[5][21] = true;
  matriz[3][22] = true;
  matriz[4][22] = true;
  matriz[5][22] = true;
  matriz[2][23] = true;
  matriz[6][23] = true;
  matriz[1][25] = true;
  matriz[2][25] = true;
  matriz[6][25] = true;
  matriz[7][25] = true;
  matriz[3][35] = true;
  matriz[4][35] = true;
  matriz[3][36] = true;
  matriz[4][36] = true;
}*/
/*
bool Vetor::getMatriz(){
  return matriz[20][38];
}*/
/*
void Vetor::setMatriz(){
  matriz [linha][coluna];
  }
*/

/*void imprimeMatriz(){

  int linha, coluna;

    //for (linha = 0; linha < 20; linha++){
        for (coluna = 0; coluna < 38; coluna++){
            // if(matriz == 'X'){
               cout << " x ";
             //}
             //else{
               //cout << " - ";
             //}
        }
        //cout << endl;
    //}

;}*/

void Vetor::Padrao(){
  int linha, coluna;

    for (linha = 0; linha < 20; linha++){
        for (coluna = 0; coluna < 38; coluna++){
            matriz[linha][coluna] = false;
        }
    }

    matriz[5][1] = 'X';
    matriz[6][1] = 'X';
    matriz[5][2] = 'X';
    matriz[6][2] = 'X';
    matriz[5][11] = 'X';
    matriz[6][11] = 'X';
    matriz[7][11] = 'X';
    matriz[4][12] = 'X';
    matriz[8][12] = 'X';
    matriz[3][13] = 'X';
    matriz[9][13] = 'X';
    matriz[3][14] = 'X';
    matriz[9][14] = 'X';
    matriz[6][15] = 'X';
    matriz[4][16] = 'X';
    matriz[8][16] = 'X';
    matriz[5][17] = 'X';
    matriz[6][17] = 'X';
    matriz[7][17] = 'X';
    matriz[6][18] = 'X';
    matriz[3][21] = 'X';
    matriz[4][21] = 'X';
    matriz[5][21] = 'X';
    matriz[3][22] = 'X';
    matriz[4][22] = 'X';
    matriz[5][22] = 'X';
    matriz[2][23] = 'X';
    matriz[6][23] = 'X';
    matriz[1][25] = 'X';
    matriz[2][25] = 'X';
    matriz[6][25] = 'X';
    matriz[7][25] = 'X';
    matriz[3][35] = 'X';
    matriz[4][35] = 'X';
    matriz[3][36] = 'X';
    matriz[4][36] = 'X';

}

void Vetor::imprimeMatriz(){

  for(linha=0 ; linha<  20; linha++){
    for(coluna=0; coluna< 38; coluna++){
      if(matriz[linha][coluna] == 'X'){
        cout << "X" << " ";
      }
      else{
        cout << "-" << " ";
      }
    }
    cout << endl;
  }
}

void Vetor::colarMatriz(){
  for(linha=0 ; linha<  20; linha++){
    for(coluna=0; coluna< 38; coluna++){
      if(matriz[linha][coluna] == 'X'){
        matriz_reserva[linha][coluna] = 'X';
      }
      else if (matriz[linha][coluna] == '-'){
        matriz_reserva[linha][coluna] = '-';
      }
    }
    cout << endl;
  }
}


void Vetor::imprimecolarMatriz(){

  for(linha=0 ; linha<  20; linha++){
    for(coluna=0; coluna< 38; coluna++){
      if(matriz_reserva[linha][coluna] == 'X'){
        cout << "X" << " ";
      }
      else{
        cout << "-" << " ";
      }
    }
    cout << endl;
  }
}
