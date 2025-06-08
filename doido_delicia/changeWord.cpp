#include <iostream>
#include <string>
using namespace std;

 string changeWord(string texto, string pvelha, string pnova)
{
   
    size_t posicao = texto.find(pvelha);

    while (posicao != string::npos)
    {
        texto.replace (posicao, pvelha.size(),pnova);
        posicao = texto.find(pvelha, posicao + pnova.size());

    }
return texto;
}