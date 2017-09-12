#include <iostream>
#include <stdlib.h>
#include <unistd.h>

#include "organismo.hpp"
#include "vetor-bidimensional.hpp"

using namespace std;

int main() {

int entrada = 0;

  Organismo matriz;


cout << "Se deseja ver a gosper glider gun digite 1:" << endl;
cout << "Se deseja ver a exploder digite 2:" << endl;

cin >> entrada;

if(entrada == 1){
matriz.glidergun();
}
else if (entrada == 2)
{
matriz.exploder();
}
else
{
  return 0;
}

while(1){

//for(entrada = 0; entrada < 2; entrada++){
  matriz.implementa();
  matriz.imprimecolarMatriz();
  //matriz.imprimeMatriz();
  matriz.colarMatriz();
//}

usleep(200000);
system("clear");

}

  return 0;
}
