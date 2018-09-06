#include <iostream>

using namespace std;

int main ()
{
    int tamanho=0;
    cout << "Informe o numero de elementos do vetor:";
    cin >> tamanho;
    int v[tamanho];

    cout << "\n Informe cada elemento do vetor:\n ";

    for(int i = 0 ; i < tamanho; i++)
    {
        cin >> v[i];
    }

    //contadores para as ocorrência de cada digito (0-9)
    int contador0 = 0;
    int contador1 = 0;
    int contador2 = 0;
    int contador3 = 0;
    int contador4 = 0;
    int contador5 = 0;
    int contador6 = 0;
    int contador7 = 0;
    int contador8 = 0;
    int contador9 = 0;

    for(int i = 0; i < tamanho; i++)
    {
        if(v[i]==0)
        {
            contador0++;
        }
        else if (v[i]==1)
        {
            contador1++;
        }
        else if (v[i]==2)
        {
            contador2++;
        }
        else if (v[i]==3)
        {
            contador3++;
        }
        else if (v[i]==4)
        {
            contador4++;
        }
        else if (v[i]==5)
        {
            contador5++;
        }
        else if (v[i]==6)
        {
            contador6++;
        }
        else if (v[i]==7)
        {
            contador7++;
        }
        else if (v[i]==8)
        {
            contador8++;
        }
        else
        {
            contador9++;
        }

    }

    int novo_vetor[9];

    novo_vetor[0]=contador0;
    novo_vetor[1]=contador1;
    novo_vetor[2]=contador2;
    novo_vetor[3]=contador3;
    novo_vetor[4]=contador4;
    novo_vetor[5]=contador5;
    novo_vetor[6]=contador6;
    novo_vetor[7]=contador7;
    novo_vetor[8]=contador8;
    novo_vetor[9]=contador9;
    
    cout << "Ocorrência de cada digito: \n";
    for(int i=0; i< 9; i++)
    {
        cout << novo_vetor[i] << " ";
    }
    
    return 0;
}