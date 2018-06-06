#include <iostream>

using namespace std;

int main ()
{
    int numeros[9];
    int n;
    //Lendo os dados do usuário    
    for(int i = 0; i <=9; i++)
    {
        cout << "Insira o " << (i+1) << " número \n";
        cin >> numeros[i];
    }

    int contador = 0;
    for(int i = 0; i <=9; i++)
    {
        if(numeros[i]==i)
        {
            contador ++;
        }
    }
    
    cout << "\n" << contador << "\n";

    return 0;
}