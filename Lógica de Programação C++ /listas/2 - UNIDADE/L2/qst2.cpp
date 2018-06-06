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

    cout << "Insira um número de (0-9):\n";
    cin >> n;

    //Verificando as posições

      for(int i = 0; i <=9; i++)
    {
        if(numeros[i]==n)
        {
            cout << i << " ";
        }
    }

    return 0;
}