#include "changeWord.h"
#include <iostream>
using namespace std;

int main()
{
    string texto = "Hoje o dia está doido demais";
    string pvelha = "doido";
    string pnova = "delícia";
    
    string resultado = changeWord(texto,pvelha, pnova);

    cout<< resultado << endl;
    
    return 0;
}