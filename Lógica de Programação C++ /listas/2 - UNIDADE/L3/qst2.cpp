#include <iostream>

using namespace std;

int main ()
{
    int tamanho;
    cout << "Insira o tamanho do seu vetor:";
    cin >> tamanho;
    int v[tamanho];

    for(int i = 0 ; i < tamanho; i++)
    {
        cout << "Insira o " << (i+1) << " número:";
        cin >> v[i];
    }

    int tamanho2;
    cout << "Insira o tamanho do seu 2° vetor:";
    cin >> tamanho2;
    int v2[tamanho2];

    for(int i = 0 ; i < tamanho2; i++)
    {
        cout << "Insira o " << (i+1) << " número:";
        cin >> v2[i];
    }


    //calculando a distância

    
    
    return 0;
}