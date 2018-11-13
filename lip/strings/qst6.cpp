#include <iostream>
#include <cstring>
#define MAX 100
using namespace std;


int busca(char string[]);

int main ()
{
    char s [100];
    char copia [100];

    bool palindromo = true;


    cout << "Digite uma string:";
    
    cin.getline(s, MAX);

    int cont = (strlen(s))-1;

    // fazendo uma copia de s -> copia
    strcpy(copia, s);
    
    for ( int i = 0 ; i < strlen(s) ; i++)
    {
        if(s[i] != copia[cont])
        {
            palindromo = false ; 
        }

        cont--;
    }

    if(palindromo)
    {
        cout  << "\n É palindromo\n";
    }
    else
    {
        cout << "\nNão é palindromo\n";
    }
   
    return 0;
}

