#include <iostream>

using namespace std;

int main ()
{
    int tamanho, contador=0;
    cout << "Insira o tamanho do seu vetor:";
    cin >> tamanho;
    int v[tamanho];

    for(int i = 0 ; i < tamanho; i++)
    {
        cout << "Insira o " << (i+1) << " número:";
        cin >> v[i];

        if(i > 0 && v[i]%i==0)
        {
            contador++;
        }
    }

    cout << "\n" << contador << " n° são divisiveis pelo indice \n";
    return 0;
}