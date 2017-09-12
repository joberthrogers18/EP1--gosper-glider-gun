#include <iostream>

#include "organismo.hpp"

using namespace std;

Organismo::Organismo(){

}


void Organismo::glidergun(){


  for (linha = 0; linha < 20; linha++){
      for (coluna = 0; coluna < 38; coluna++){
          setMAtriz(linha,coluna,'-');
      }
  }

    setMAtriz(5,1,'X');
    setMAtriz(6,1,'X');
    setMAtriz(5,2,'X');
    setMAtriz(6,2,'X');
    setMAtriz(5,11,'X');
    setMAtriz(6,11,'X');
    setMAtriz(7,11,'X');
    setMAtriz(4,12,'X');
    setMAtriz(8,12,'X');
    setMAtriz(3,13,'X');
    setMAtriz(9,13,'X');
    setMAtriz(3,14,'X');
    setMAtriz(9,14,'X');
    setMAtriz(6,15,'X');
    setMAtriz(4,16,'X');
    setMAtriz(8,16,'X');
    setMAtriz(5,17,'X');
    setMAtriz(6,17,'X');
    setMAtriz(7,17,'X');
    setMAtriz(6,18,'X');
    setMAtriz(3,21,'X');
    setMAtriz(4,21,'X');
    setMAtriz(5,21,'X');
    setMAtriz(3,22,'X');
    setMAtriz(4,22,'X');
    setMAtriz(5,22,'X');
    setMAtriz(2,23,'X');
    setMAtriz(6,23,'X');
    setMAtriz(1,25,'X');
    setMAtriz(2,25,'X');
    setMAtriz(6,25,'X');
    setMAtriz(7,25,'X');
    setMAtriz(3,35,'X');
    setMAtriz(4,35,'X');
    setMAtriz(3,36,'X');
    setMAtriz(4,36,'X');

}



void Organismo::exploder(){


  for (linha = 0; linha < 20; linha++){
      for (coluna = 0; coluna < 38; coluna++){
          setMAtriz(linha,coluna,'-');
      }
  }

    setMAtriz(1+7,1+5,'X');
    setMAtriz(2+7,1+5,'X');
    setMAtriz(3+7,1+5,'X');
    setMAtriz(4+7,1+5,'X');
    setMAtriz(5+7,1+5,'X');
    setMAtriz(1+7,3+5,'X');
    setMAtriz(5+7,3+5,'X');
    setMAtriz(1+7,5+5,'X');
    setMAtriz(2+7,5+5,'X');
    setMAtriz(3+7,5+5,'X');
    setMAtriz(4+7,5+5,'X');
    setMAtriz(5+7,5+5,'X');


    setMAtriz(1+7,1+26,'X');
    setMAtriz(2+7,1+26,'X');
    setMAtriz(3+7,1+26,'X');
    setMAtriz(4+7,1+26,'X');
    setMAtriz(5+7,1+26,'X');
    setMAtriz(1+7,3+26,'X');
    setMAtriz(5+7,3+26,'X');
    setMAtriz(1+7,5+26,'X');
    setMAtriz(2+7,5+26,'X');
    setMAtriz(3+7,5+26,'X');
    setMAtriz(4+7,5+26,'X');
    setMAtriz(5+7,5+26,'X');

}
