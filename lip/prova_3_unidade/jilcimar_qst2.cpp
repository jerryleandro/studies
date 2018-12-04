#include <iostream>
#define MAX 100
#include <cstring>

using namespace std;

struct Traducao
{
    char ingles [MAX], portugues[MAX];
};

Traducao traduzPalavra (char busca[], Traducao dic[]);

Traducao adicionaPalavra (Traducao dic[]);

int main()
{
    char opcao[MAX];
    Traducao dicionario[MAX];

    cout << "\n BEM VINDO \n";
    adicionaPalavra(dicionario);

    do
    {
        cout << "\nDigite a palavra que deseja traduzir:";
        cin.getline(opcao, MAX);

        if(strcmp(opcao, "encerrar agora")!=0)
        {
            traduzPalavra(opcao,dicionario);
        }

    }while(strcmp(opcao, "encerrar agora")!=0);

    cout << "\n Programa Encerrado!";

    return 0;
}
Traducao adicionaPalavra (Traducao dic[])
{
    for(int i = 0; i< 2 ; i ++)
    {
        if(strlen(dic[i].ingles)==0)
        {
            cout << "\n Digite a palavra ingles para cadastro: ";
            cin.getline(dic[i].ingles, MAX);
            cout << "\n Digite sua traducao: ";
            cin.getline(dic[i].portugues, MAX);
        }
    }
}

Traducao traduzPalavra (char busca[], Traducao dic[])
{
    int achou = 0;

    for(int i = 0 ; i < 2 ; i++)
    {
        if(strcmp(dic[i].portugues, busca)==0)
        {
            cout << "\n A palavra " << dic[i].portugues << " esta em portugues e sua traducao eh " << dic[i].ingles;
            achou++;
        }
        else if (strcmp(dic[i].ingles, busca)==0)
        {
            cout << "\n A palavra " << dic[i].ingles << " esta em ingles e sua traducao eh " << dic[i].portugues;
            achou++;
        }
    }
    if(achou == 0)
    {
        cout << "\n Palavra não cadastrada!";
    }
}
