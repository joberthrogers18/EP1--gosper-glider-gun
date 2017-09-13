#include <iostream>
#include <stdlib.h>
#include <unistd.h>

#include "organismo.hpp"
#include "vetor-bidimensional.hpp"

using namespace std;

int main() {

int entrada = 0;

  Organismo matriz;

cout << "\n\n\tCONWAY GAME OF LIFE\n\n"<< endl;
cout << "Digite:\n\n"<<endl;
cout << "(1) Se deseja ver a GOSPER GLIDER GUN :" << endl;
cout << "(2) Se deseja ver a EXPLODER:" << endl;
cout << "(3) Se deseja ver a ACORN:\n\n" << endl;

cin >> entrada;

if(entrada != 1  && entrada != 2 && entrada != 3 )
{
  while(1){
    cout << "ENTRADA INVALIDA DIGITE NOVAMENTE!!!" << endl;
    cout << "(1) Se deseja ver a GOSPER GLIDER GUN :" << endl;
    cout << "(2) Se deseja ver a EXPLODER:" << endl;
    cout << "(3) Se deseja ver a ACORN:\n\n" << endl;
    cin >> entrada;

    if(entrada == 1  || entrada == 2 ||entrada == 3 ){
      break;
    }
  }
}


if(entrada == 1)
{
matriz.glidergun();
}
else if (entrada == 2)
{
matriz.exploder();
}
else if (entrada == 3)
{
matriz.acorn();
}


while(1){

//for(entrada = 0; entrada < 2; entrada++){
  matriz.implementa();
  matriz.imprimecolarMatriz();
  //matriz.imprimeMatriz();
  matriz.colarMatriz();
//}

usleep(300000);
system("clear");

}


  return 0;
}
