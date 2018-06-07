#include <iostream>
#include <stdlib.h>
using namespace std;

int menu();
void core();
int jogar(int dificuldade);
int escolha_numero(int dificuldade);
int escolha_coluna(int dificuldade);
int escolha_linha(int dificuldade);
void instrucoes();
void dica();

int main ()
{
    int escolha = menu();

    if (escolha==1)
    {
        core();
    }
    else  if(escolha ==2)
    {
        instrucoes();
    }
    else if (escolha ==3)
    {
        exit(0);
    }
    else
    {
        main();
    }
    return 0;
}

void core()
{
    system("clear");
    string nome;
    int dificuldade =0;
    int escolha;
    cout << "\n Olá, primeiro insira o seu nickname (Apenas 1 palavra): ";
    cin >> nome;
    cout << "\n=============================================\n";
    cout << "\nBem vindo ao jogo " << nome << "\n";
    cout << "\n Escolha um número correspondente a dificuldade:\n";
    cout <<"\n 1 - Fácil\n 2 - Médio\n 3 - Difícil\n";
    cin>>escolha;
    if(escolha==1)
    {
        dificuldade = 3;        
    }
    else if (escolha ==2)
    {
        dificuldade = 5;

    }
    else if (escolha ==3)
    {
        dificuldade = 7;
    }
    else
    {
        core();
    }
    jogar(dificuldade);
}

int jogar(int dificuldade)
{
    system("clear");
    string nivel;
    int escolha = 0, coluna =0 ,linha = 0,numero=0;
    
    if(dificuldade ==3)
    {
        nivel = "FÁCIL";
    }
    else if(dificuldade ==5)
    {
        nivel = "MÉDIO";

    }
    else{
        nivel = "DIFÍCIL";
    }
    cout << "\n================== "<<nivel<<" =====================\n";

    int pino1[dificuldade];
    int pino2[dificuldade];
    int pino3[dificuldade];

    cout<< "\n";
    for(int i=1; i<=dificuldade ; i++)
    {
        pino1[i] = (i);
        pino2[i]=0;
        pino3[i]=0;
    }
    cout << "      A B C\n";

    for(int i = 1; i <=dificuldade; i++)
    {
         cout<< "\n["<<(i)<<"] - "<< pino1[i] << " " << pino2[i] << " " << pino3[i] << "\n";
    }

    numero = escolha_numero(dificuldade);
    dica();
    coluna = escolha_coluna(dificuldade);
    linha = escolha_linha(dificuldade);




    return 0;
}

int escolha_numero(int dificuldade)
{
    cout << "\n Escolha um dos números que deseja movimentar: ";
    int escolha = 0;
    cin >> escolha;

    if(escolha > (dificuldade) || escolha<=0)
    {
        jogar(dificuldade);
    }

    return escolha;
}

int escolha_coluna(int dificuldade)
{
    char escolha;
    int posicao =0;
    cout << "\n Escolha uma coluna que deseja movimentar: (A B C): ";
    cin >> escolha;

    if(!(escolha == 'A' || escolha == 'B' || escolha == 'C'))
    {
        escolha_coluna(dificuldade);
    }
    else{
        if(escolha =='A' || escolha=='a')
        {
            posicao = 1;
        }
        else if (escolha =='B'|| escolha=='b'){
            posicao = 2;
        }
        else{
            posicao =3;
        }
    }

    return posicao;
}
int escolha_linha(int dificuldade)
{
    int escolha = 0;
    cout << "\n Escolha uma linha que deseja movimentar (menor que "<<(dificuldade)<<") : ";
    cin >> escolha;

    if(escolha > (dificuldade) || escolha<=0)
    {
        escolha_linha(dificuldade);
    }

    return escolha;
}

void dica ()
{
    cout << "\n========= DICA =========\n";
    cout << "Ex.: \n=> B (Enter)\n=> 3 (Enter)\n Assim você estará escolhendo a posição B[3]\n";
    cout << "\n========================\n";
}

int boasvindas()
{   
    cout << "\n/*\n|--------------------------------------------------------------------------\n| Bem vindo ao jogo  Torre de Hanói\n|--------------------------------------------------------------------------\n| O famoso jogo da Torre de Hanói é um quebra-cabeça que consiste em uma\n| base contendo três pinos. Em um dos quais são dispostos alguns números\n| uns sobre os outros, em ordem crescente, de cima para baixo.\n*/\n"; 
    return 0;
}
int menu()
{    
    system("clear");
    int escolha = 0;
    boasvindas();
    cout << "\n Selecione uma opção para jogar:\n"; 
    cout << "\n 1 - Jogar \n 2 - Instruções \n 3 - Sair\n";
    cin >> escolha;

    return escolha;
}

void instrucoes()
{
    system("clear");
    int escolha = 0;
    cout << "\n/*\n|--------------------------------------------------------------------------\n|REGRAS DO JOGO\n|--------------------------------------------------------------------------\n|OBJETIVO: mover todos os núméros para o pino da direita.\n|\n|REGRAS: Informando o número e a coordenada, você deve\n|mover um número de cada vez, sendo que um número maior\n|nunca pode ficar em cima de um número menor.\n|\n*/\n";
    cout << "\nDigite 0 - Voltar ao menu:";
    cin >> escolha;
    if(escolha == 0)
    {
        main();
    }
}

