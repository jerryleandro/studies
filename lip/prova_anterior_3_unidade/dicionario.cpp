#include <iostream>

#include <cstring>

#define MAX 100

using namespace std;

struct Dicionario
{
    char ingles [MAX], portugues [MAX]; 
};

Dicionario adicionar (Dicionario dic[]);
Dicionario buscar_en (Dicionario dic[]);
Dicionario buscar_ptbr (Dicionario dic[]);

int main()
{
    char opcao [MAX];
    Dicionario dic [MAX];
    do
    {
        cout<<"\n ==== DICIONÁRIO ==== \n";
        cout<<"\n1-Adicicionar palavras\n2-Buscar em PT-BR\n3-Buscar em EN\n> 'encerrar programa' p/ finalizar\n";
        cin.getline(opcao,MAX);

        if(strcmp(opcao, "1")==0)
        {
            adicionar(dic);
        }
        else if (strcmp(opcao, "2")==0)
        {
            buscar_ptbr(dic);
        }
        else if (strcmp(opcao, "3")==0)
        {
            buscar_en(dic);
        }
    }while(strcmp(opcao, "encerrar programa") != 0);

    cout << "\n";
    cout << "\n === Programa encerrado! ===";

    return 0;
}

Dicionario adicionar (Dicionario dic[])
{
    for (int i = 0 ; i < MAX; i++)
    {
        cout << "\nInsira a palavra (EN):";
        cin.getline(dic[i].ingles, MAX);
        cout << "\nInsira a mesma palavra (PTBR): ";
        cin.getline(dic[i].portugues, MAX);
        i = 100;
    }
}

Dicionario buscar_en (Dicionario dic[])
{
    char busca[MAX];
    cout << "\nDigite a palavra que deseja buscar:";
    cin.getline(busca, MAX);
    for(int i = 0 ; i < MAX; i++)
    {
        if(strcmp(dic[i].ingles, busca)==0)
        {
            cout << "\n **** PALAVRA ENCONTRADA ****\n";
            cout << "\n ==> Inglês: " << dic[i].ingles;
            cout << "\n ==> Português: " << dic[i].portugues;
            cout << "\n ***************************\n";
        }
    }
   
}
Dicionario buscar_ptbr (Dicionario dic[])
{
    char busca[MAX];
    cout << "\nDigite a palavra que deseja buscar: ";
    cin.getline(busca, MAX);
    for(int i = 0 ; i < MAX; i++)
    {
        if(strcmp(dic[i].portugues, busca)==0)
        {
            cout << "\n **** PALAVRA ENCONTRADA **** \n";
            cout << "\n ==> Inglês: " << dic[i].ingles;
            cout << "\n ==> Português: " << dic[i].portugues;
            cout << "\n ***************************\n";
        }
    }
}
