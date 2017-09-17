#include <iostream>
#include <stdlib.h>
#include <unistd.h>

#include "organismo.hpp"
#include "glider_gun.hpp"
#include "exploder.hpp"

using namespace std;

int main() {

int entrada = 0, entrada2 = 0, desloca_linhas, desloca_colunas;

cout << "\n\n\tCONWAY GAME OF LIFE\n\n"<< endl;
cout << "Digite:\n\n"<<endl;
cout << "(1) Se deseja ver um GLIDER :" << endl;
cout << "(2) Se deseja ver a GOSPER GLIDER GUN:" << endl;
cout << "(3) Se deseja ver a EXPLODER:\n\n" << endl;
cin >> entrada;
system("clear");

if(entrada != 1  && entrada != 2 && entrada != 3 )
{
  while(1){
    cout << "ENTRADA INVALIDA DIGITE NOVAMENTE!!!" << endl;
    cout << "(1) Se deseja ver um GLIDER :" << endl;
    cout << "(2) Se deseja ver a GOSPER GLIDER GUN:" << endl;
    cout << "(3) Se deseja ver a EXPLODER:\n\n" << endl;
    cin >> entrada;
    system("clear");

    if(entrada == 1  || entrada == 2 ||entrada == 3 ){
      break;
    }
  }
}


if(entrada == 1)
{
  Organismo matriz;

  cout << "(1) Se deseja ver como um GLIDDER se comporta:" << endl;
  cout << "(2) Se deseja escolher a posição de inicio do Glider:" << endl;
  cin >> entrada2;
  system("clear");
  while(entrada2 != 1 && entrada2 != 2){
    cout << "ENTRADA INVALIDA DIGITE NOVAMENTE!!!" << endl;
    cout << "(1) Se deseja ver como um GLIDDER se comporta:" << endl;
    cout << "(2) Se deseja escolher a posição de inicio do Glider:" << endl;
    cin >> entrada2;
    system("clear");

    if(entrada2 == 1  || entrada2 == 2){
      break;
    }
  }

  if (entrada2 == 1){
    matriz.block();
  }
  else if(entrada2 == 2){
    cout << "Digite o numero de linha a ser deslocadas:"<<endl;
    cout << "maior que 0 e menor que 40"<< endl;
    cin >> desloca_linhas;
    system("clear");

    while (desloca_linhas < 0 || desloca_linhas > 40) {
      cout << "ENTRADA INVALIDA DIGITE NOVAMENTE!!!" << endl;
      cout << "Digite o numero de linha a ser deslocadas :"<<endl;
      cout << "maior que 0 e menor que 40"<< endl;
      cin >> desloca_linhas;
      system("clear");

    }

    cout << "Digite o numero de coluna a ser deslocadas:"<<endl;
    cout << "maior que 0 e menor que 60"<< endl;
    cin >> desloca_colunas;
    system("clear");

    while (desloca_colunas < 0 || desloca_colunas > 60) {
      cout << "ENTRADA INVALIDA DIGITE NOVAMENTE!!!" << endl;
      cout << "Digite o numero de linha a ser deslocadas :"<<endl;
      cout << "maior que 0 e menor que 60"<< endl;
      cin >> desloca_colunas;
      system("clear");

    }

    matriz.block(desloca_linhas, desloca_colunas);
  }

}
else if (entrada == 2)
{
  Glidergun matriz;
  matriz.glidergun();
}
else if (entrada == 3)
{
  Exploder matriz;
  cout << "(1) Se deseja ver como a EXPLODER se comporta:" << endl;
  cout << "(2) Se deseja escolher a posição de inicio da EXPLODER:" << endl;
  cin >> entrada2;
  system("clear");
  while(entrada2 != 1 && entrada2 != 2){

    cout << "ENTRADA INVALIDA DIGITE NOVAMENTE!!!" << endl;
    cout << "(1) Se deseja ver como a EXPLODER se comporta:" << endl;
    cout << "(2) Se deseja escolher a posição de inicio da EXPLODER:"<< endl;
    cin >> entrada2;
    system("clear");

    if(entrada2 == 1  || entrada2 == 2){
      break;
    }
  }

  if (entrada2 == 1){
    matriz.exploder();
  }
  else if(entrada2 == 2){
    cout << "Digite o numero de linha a ser deslocadas :"<<endl;
    cout << "maior que 0 e menor que 40"<< endl;
    cin >> desloca_linhas;
    system("clear");

    while (desloca_linhas < 0 || desloca_linhas > 40) {
      cout << "ENTRADA INVALIDA DIGITE NOVAMENTE!!!" << endl;
      cout << "Digite o numero de linha a ser deslocadas :"<<endl;
      cout << "maior que 0 e menor que 40"<< endl;
      cin >> desloca_linhas;
      system("clear");

    }
    cout << "Digite o numero de coluna a ser deslocadas:"<<endl;
    cout << "maior que 0 e menor que 60"<< endl;
    cin >> desloca_colunas;
    system("clear");

    while (desloca_colunas < 0 || desloca_colunas > 60) {
      cout << "ENTRADA INVALIDA DIGITE NOVAMENTE!!!" << endl;
      cout << "Digite o numero de linha a ser deslocadas :"<<endl;
      cout << "maior que 0 e menor que 60"<< endl;
      cin >> desloca_colunas;
      system("clear");

    }

    matriz.exploder(desloca_linhas, desloca_colunas);
  }
}

  return 0;
}
