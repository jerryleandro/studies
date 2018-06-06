#include <iostream>
#include <stdlib.h>
using namespace std;

int menu();
void instrucoes();

int main ()
{
    int escolha = menu();

    if(escolha ==2)
    {
        instrucoes();
    }
    return 0;
}

int boasvindas()
{   
    cout << "\n/*\n|--------------------------------------------------------------------------\n| Bem vindo ao jogo  Torre de Hanói\n|--------------------------------------------------------------------------\n| O famoso jogo da Torre de Hanói é um quebra-cabeça que consiste em uma\n| base contendo três pinos. Em um dos quais são dispostos alguns números\n| uns sobre os outros, em ordem crescente, de cima para baixo.\n*/\n"; 
    return 0;
}
int menu()
{
    int escolha = 0;
    boasvindas();
    cout << "\n Selecione uma opção para jogar:"; 
    cout << "\n 1 - Jogar \n 2 - Instruções \n 3 - Sair\n";
    cin >> escolha;

    return escolha;
}

void instrucoes()
{
    int escolha = 0;
    cout << "\n/*\n|--------------------------------------------------------------------------\n|REGRAS DO JOGO\n|--------------------------------------------------------------------------\n|OBJETIVO: mover todos os núméros para o pino da direita.\n|\n|REGRAS: Informando o número e a coordenada, você deve\n|mover um número de cada vez, sendo que um número maior\n|nunca pode ficar em cima de um número menor.\n|\n*/\n";

    cout << "Digite 0 - Voltar ao menu:";
    cin >> escolha;
    if(escolha == 0)
    {
        menu();
    }
}

