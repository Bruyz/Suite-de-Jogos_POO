
#include <iostream>
class Forca
{
    public:
           const int TAM = 20;
            std::string palavras[20]={"zebra" , "gato" , "cachorro" , "elefante" , "camelo"  , "pinguim" ,
    "cavalo marinho" , "baleia" , "tubarao" , "urso" , "aguia" , "arara" , "cacatua" , "maritaca" ,
    "tigre" ,  "leao" , "pavao" , "pato" , "peixe" , "morcego"};
            std::string Sortear();
            std::string montarP2(std::string);
            std::string verificarletra(std::string,std::string, char,bool* );
            bool verificafimjogo(std::string);



};
