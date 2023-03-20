
#include "Forca.h"

 std::string Forca::Sortear(){
  int n = rand() % TAM;
  return palavras[n];
}
 std::string Forca::montarP2( std::string p1){
  std::string p2="";
  for (int i = 0; i<p1.length(); i++){
    p2 += '_';
  }
   return p2;
}
 std::string Forca::verificarletra( std::string p1, std::string p2, char L, bool *achei){
*achei = false;
   for(int i = 0; i<p1.length(); i++){
    if(p1[i]==L){
    p2[i]=L;
     }
    }
  return p2;
  }
 bool Forca::verificafimjogo( std::string p2){
bool acabou = true;
 for(int i=0; i<p2.length(); i++){
  if(p2[i]=='_'){
    return false;
    }
 }
 return true;
 }



