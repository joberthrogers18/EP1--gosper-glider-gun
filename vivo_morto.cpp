#include "vivo_morto.hpp"

using namespace std;

 Vivo::Vivo(){
   //ser = '-';
 }

 /*char Vivo::getSer(){
   return ser;
 }*/

 void Vivo::setVivo(char vivo){
   vivo = 'X';
 }

 void Vivo::getVivo(){
   return vivo;
 }

 void Vivo::setMorto(char morto){
   morto = '-';
 }

  char Vivo::getMorto(){
   return morto;
 }

 void Vivo::verificarVida(char valor, int vivos){
   if(valor == getVivo()){
        if (vivos > 3){
         return '-';
       }
       else if (vivos < 2){
         return '-';
       }

   }
   else if(valor == getMorto()){
       if (vivos == 3){
         return 'X';
       }
   }

 }
