#include <iostream>
#include <stdlib.h>
using namespace std;

int menu();
void core();
int jogar(int dificuldade);
int escolha_numero(int dificuldade);
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
        dificuldade = 2;        
    }
    else if (escolha ==2)
    {
        dificuldade = 4;

    }
    else if (escolha ==3)
    {
        dificuldade = 6;
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
    string nivel,escolha_coluna;
    int escolha = 0, escolha_linha;
    

    if(dificuldade ==2)
    {
        nivel = "FÁCIL";
    }
    else if(dificuldade ==4)
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
    for(int i=0; i<=dificuldade ; i++)
    {
        pino1[i] = (i+1);
        pino2[i]=0;
        pino3[i]=0;
    }
    cout << "      A B C\n";

    for(int i = 0; i <=dificuldade; i++)
    {
         cout<< "\n["<<(i+1)<<"] - "<< pino1[i] << " " << pino2[i] << " " << pino3[i] << "\n";
    }

    int numero = escolha_numero(dificuldade);

    cout << "\n Agora escolha uma posição para mover o número " << (numero) << "\n";
    dica();
    cin >> escolha_coluna;
    cin >> escolha_coluna;

    return 0;
}

int escolha_numero(int dificuldade)
{
    cout << "\n Escolha um dos números que deseja movimentar: ";
    int escolha = 0;
    cin >> escolha;

    if(escolha > (dificuldade+1) || escolha<=0)
    {
        jogar(dificuldade);
    }

    return escolha;
}

void dica ()
{
    cout << "Ex.: \nB (Enter) 3 (Enter)\n Assim você estará escolhendo a posição B[3]\n";
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

