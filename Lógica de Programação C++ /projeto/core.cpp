#include <iostream>
#include <stdlib.h>
using namespace std;

int menu();

int main ()
{
    menu();
    system("clear");
    return 0;
}

int boasvindas()
{   
    cout << "\n/*\n|--------------------------------------------------------------------------\n| Bem vindo ao jogo  Torre de Hanói\n|--------------------------------------------------------------------------\n| O famoso jogo da Torre de Hanói é um quebra-cabeça que consiste em uma\n| base contendo três pinos. Em um dos quais são dispostos alguns números\n| uns sobre os outros, em ordem crescente, de cima para baixo.\n*/\n"; 
    return 0;
}
int menu ()
{
    int escolha = 0;
    boasvindas();
    cout << "\n Selecione uma opção para jogar:"; 
    cout << "\n 1 - Jogar \n 2 - Instruções \n 3 - Sair\n";
    cin >> escolha;

    return escolha;
}