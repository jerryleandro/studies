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
    }

    //média das extremidades
    int media = (v[0]+v[tamanho-1])/2;
    cout << "\n Média das extremidades:"<< media << "\n";

    //qauntidade de valores que sao maior que a média
    int qtd=0;
    for(int i =0 ; i <tamanho; i++)
    {
        if(v[i]>media)
        {
            qtd++;
        }
    }
    cout << "\nExistem " << qtd << " valores maiores que a média\n";
    return 0;
}
