#include "vivo_morto.hpp"

using namespace std;

 Vivo::Vivo(){
   //ser = '-';
 }

 /*char Vivo::getSer(){
   return ser;
 }*/

 void Vivo::setVivo(){
   vivo = 'X';
 }

 char Vivo::getVivo(){
   return vivo;
 }

 void Vivo::setMorto(){
   morto = '-';
 }

  char Vivo::getMorto(){
   return morto;
 }

 char Vivo::verificarVida(char valor, int vivos){
   if(valor == getVivo()){
        if (vivos > 3){
         return getMorto();
       }
       else if (vivos < 2){
         return getMorto();
       }

   }
   else if(valor == getMorto()){
       if (vivos == 3){
         return getVivo();
       }
   }

 }
