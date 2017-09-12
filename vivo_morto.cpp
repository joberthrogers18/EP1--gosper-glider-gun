#include "vivo_morto.hpp"

using namespace std;

 Vivo::Vivo(){
   vivo = 'X';
   morto = '-';
 }

 char Vivo::getVivo(){
   return vivo;

 }
  char Vivo::getMorto(){
   return morto;
 }

 char Vivo::verificarVida(int linha, int coluna,char valor, int vivos){
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
