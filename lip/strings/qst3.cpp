#include <iostream>
#include <cstring>
#define MAX 100
using namespace std;


int contacaracter(char busca[], char string[]);

int main ()
{
    char s [100];
    char busca [1];


    cout << "Digite um caractere:";
    cin.getline(busca, MAX);

    cout << "Digite uma frase:";
    
    cin.getline(s, MAX);

   
    
    cout << "\n O cractere '" << busca[0] << "' aparece " << contacaracter(busca, s) << " vez(es) na string '" << s << "' " << endl ; 


    return 0;
}

int contacaracter(char busca[], char string[])
{
    int cont = 0 ;

     for(int i = 0 ; i < strlen(string) ; i++)
    {
        if(busca[0]==string[i])
        {
            cont++;
        }
    }

    return cont;
}
