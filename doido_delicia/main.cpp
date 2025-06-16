#include "changeWord.h"
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        cout << "sem argumentos validos" <<endl;
    }
    string texto;
    for (int i = 1; i < argc; i++)
    {
        texto += argv[i];
        if (i < argc -1)
        texto += " ";
    }
    string pvelha = "doido";
    string pnova = "delícia";
    
    string resultado = changeWord(texto,pvelha, pnova);

    cout<< resultado << endl;
    
    return 0;
} 