#include <iostream>
#include <cstring>
#define MAX 100
using namespace std;

int main ()
{
    char s [100];
    int cont = 0 ;

    cout << "Digite uma frase:";
    
    cin.getline(s, MAX);

    for(int i = 0 ; i < strlen(s) ; i++)
    {
        if(s[i] == ' ')
        {
            cont++;
        }
    }
    
    cout << "\n Esta frase tem " << (cont+1) << " palavra(s)" << endl;   


    return 0;
}
