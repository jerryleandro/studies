#include <iostream>
#include <cstring>
#define MAX 100
using namespace std;


int busca(char string[]);

int main ()
{
    char s [100];

    cout << "Digite uma string:";
    
    cin.getline(s, MAX);
   
    cout << "\n " << busca(s) << endl ; 

    return 0;
}

int busca(char string[])
{
    int retorno = 0 ;
    char positivo [] = "positivo";
    char negativo [] = "negativo";



    if(strcmp(string, positivo) == 0)
    {
        retorno = 1;
    }
    else if (strcmp(string, negativo) == 0)
    {
        retorno = 0;
    }
    
    return retorno;
}
