#include <iostream>

#include "vetor-bidimensional.hpp"

using namespace std;

//construtor
Vetor::Vetor(){
  vivo = 'x';
  morto = '.';
}

Vetor::~Vetor(){}

char Vetor::getVivo(){
  return vivo;

}
 char Vetor::getMorto(){
  return morto;
}

void Vetor::setMAtriz(int linha, int coluna,char valor){
  matriz[linha][coluna] = valor;
}

void Vetor::setMAtrizreserva(int linha, int coluna, char valor){
  matriz_reserva[linha][coluna] = valor;
}

 int Vetor::verificar_vivos(int ultimo_linha, int ultimo_coluna,int linha, int coluna, char valor){
	 int vivo=0;
     int i,j, intervalo_a1,intervalo_a2,intervalo_b1, intervalo_b2;

     if(linha == 0 && coluna == 0){
       intervalo_a1 = linha;
       intervalo_a2 = linha + 2;
       intervalo_b1 = coluna;
       intervalo_b2 = coluna +2;
     }
     else if(linha == 0 && coluna == ultimo_coluna){
       intervalo_a1 = linha;
       intervalo_a2 = linha + 2;
       intervalo_b1 = coluna - 1;
       intervalo_b2 = coluna + 1;
     }
     else if(linha == ultimo_linha && coluna == 0){
       intervalo_a1 = linha - 1;
       intervalo_a2 = linha + 1;
       intervalo_b1 = coluna;
       intervalo_b2 = coluna + 2;
     }
     else if(linha == ultimo_linha && coluna == ultimo_coluna){
       intervalo_a1 = linha - 1;
       intervalo_a2 = linha + 1;
       intervalo_b1 = coluna - 1;
       intervalo_b2 = coluna + 1;
     }
     else if(linha == 0 && coluna > 0 && coluna < ultimo_coluna){
       intervalo_a1 = linha;
       intervalo_a2 = linha + 2;
       intervalo_b1 = coluna - 1;
       intervalo_b2 = coluna + 2;
     }
     else if(coluna == 0 && linha > 0 && linha < ultimo_linha){
       intervalo_a1 = linha - 1;
       intervalo_a2 = linha + 2;
       intervalo_b1 = coluna;
       intervalo_b2 = coluna + 2;
     }
     else if(linha == ultimo_linha && coluna > 0 && coluna < ultimo_coluna){
       intervalo_a1 = linha - 1;
       intervalo_a2 = linha + 1;
       intervalo_b1 = coluna - 1;
       intervalo_b2 = coluna + 2;
     }
     else if(coluna == ultimo_coluna && linha > 0 && linha < ultimo_linha){
       intervalo_a1 = linha - 1;
       intervalo_a2 = linha + 2;
       intervalo_b1 = coluna - 1;
       intervalo_b2 = coluna + 1;
     }
     else{
       intervalo_a1 = linha - 1;
       intervalo_a2 = linha + 2;
       intervalo_b1 = coluna - 1;
       intervalo_b2 = coluna + 2;
     }

     for(i = intervalo_a1; i < intervalo_a2; i++){
         for(j = intervalo_b1; j < intervalo_b2; j++){
             if(matriz[i][j] == 'x'){
                 vivo = vivo + 1;
             }
         }
     }

     if(valor == 'x'){
       vivo -= 1;
     }

    return vivo;
 }

 char Vetor::verificarVida(int linha, int coluna,char valor, int vivos){
  if(valor == getVivo()){
      if (vivos > 3){
          return getMorto();
       }
       else if (vivos < 2){

        return getMorto();
      }
       else{
         return valor;
       }

   }
   else if(valor == getMorto()){
       if (vivos == 3){
         return getVivo();
       }
       else{
         return valor;
       }
   }
 }


void Vetor::implementa(int valor_linha,int valor_coluna){
  int linha, coluna, numero_vivos;

  for (linha = 0; linha < valor_linha; linha++){
      for (coluna = 0; coluna < valor_coluna; coluna++){
          numero_vivos = verificar_vivos(valor_linha,valor_coluna,linha, coluna, matriz[linha][coluna]);
          matriz_reserva[linha][coluna] = verificarVida(linha,coluna,matriz[linha][coluna], numero_vivos);
      }
  }
}

void Vetor::colarMatriz(){

  for(linha = 0 ; linha < 60; linha++){
    for(coluna = 0; coluna <60; coluna++){
      if(matriz_reserva[linha][coluna] == 'x'){
      setMAtriz(linha, coluna,'x');
      }
      else if(matriz_reserva[linha][coluna] =='.'){
        setMAtriz(linha, coluna,'.');
      }
    }
  }
}

void Vetor::imprimecolarMatriz(int valor_linha,int valor_coluna){

    for(linha=0 ; linha<  valor_linha; linha++){
      for(coluna=0; coluna< valor_coluna ; coluna++){
        if(matriz[linha][coluna] ==  getVivo()){
          cout << getVivo() << " ";
        }
        else{
          cout << getMorto()<< " ";
        }
      }
      cout << endl;
    }
  }
