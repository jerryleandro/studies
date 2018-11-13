#include <iostream>
#include <cstring>
#define MAX 100
using namespace std;

int main ()
{
    char s [100];
    char busca [1];

    int cont = 0 ;

    cout << "Digite um caractere:";
    cin.getline(busca, MAX);

    cout << "Digite uma frase:";
    
    cin.getline(s, MAX);

    for(int i = 0 ; i < strlen(s) ; i++)
    {
        if(busca[0]==s[i])
        {
            cont++;
        }
    }
    
    cout << "\n O cractere '" << busca[0] << "' aparece " << cont << " vez(es) na string '" << s << "' " << endl ; 


    return 0;
}
