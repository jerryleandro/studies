#include <iostream>

using namespace std;

int main ()
{
    int tamanho, contador=0;
    cout << "Informe o numero de elementos do vetor::";
    cin >> tamanho;
    int v[tamanho];

    int maior = 0;
    int posicao = 0;
    cout << "Informe cada um dos elementos do vetor:\n";
    for(int i = 0 ; i < tamanho; i++)
    {
        cin >> v[i];

        //Verificando o maior maior número e guardando a sua posicação
        if(v[i]>maior)
        {
            maior = v[i];
            posicao = i;
        }
    }

    cout << "\nPosição do maior elemento do vetor é: " << posicao << " e o número dessa posição é: " << maior << "\n";
 

    return 0;
}