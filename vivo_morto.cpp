#include "vivo_morto.hpp"

using namespace std;

 Vivo::Vivo(){
   ser = '-';
 }

 char Vivo::getSer(){
   return ser;
 }

 void Vivo::setVivo(){
   ser = 'X';
 }

 void Vivo::setMorto(){
   ser = '-';
 }
