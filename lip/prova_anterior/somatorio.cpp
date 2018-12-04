#include <iostream>

using namespace std;

#define MAX 100

float somatorio(float vet[], int ultimo_elemento);

int main()
{
    int n;
    cout << "\n Insira a quatidade de números que deseja somar:";
    cin >> n;

    float vet[n];

    //Recebendo do usuário os números para somar

    for ( int i = 0 ; i < n ; i++)
    {
        cout << (i+1) << " numero:";
        cin >> vet[i];
    }

    int ultimo = n-1;

    cout << "\nResultado da soma é:";
    cout << somatorio(vet, ultimo);

    return 0;
}
float somatorio(float vet[], int ultimo_elemento)
{
    int proximo; 
    float resultado;

    //verificar se tem mair de um número para ser somado
    if(ultimo_elemento >= 0)
    {
        proximo = ultimo_elemento-1;
        resultado =  vet[ultimo_elemento];
        return resultado + somatorio(vet, proximo); 
    }
    else
    {
        return 0;
    }
}


