#include <iostream>
#include <stdlib.h>
using namespace std;

int menu();
void core();

int jogar(int dificuldade);
int escolha_numero(int dificuldade);
int escolha_coluna(int dificuldade);
int menor_numero(int numero , int vetor[], int dificuldade);

void instrucoes();
void dica();
void alerta();
void exibir_tabuleiro(int dificuldade, int pino1[], int pino2[], int pino3[]);



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
    int escolha = 0, coluna =0,numero=0;
    
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

    exibir_tabuleiro(dificuldade, pino1,  pino2, pino3);

    int movimentos = 0;
    bool vitoria = false;

    dica();

    //Mudar a condição p/ até o usuário sair ou ganhar
    while(!vitoria)
    {
        numero = escolha_numero(dificuldade);
        coluna = escolha_coluna(dificuldade);

        //percorrendo os vetores para movimentar
        for(int i = 1; i <=dificuldade; i++)
        {        
            //Se tiver no 1 pino
            if(pino1[i]==numero)
            {
                int validacao_peca = menor_numero(numero,pino1,dificuldade);
                //verificar se é o menor (diferente de zero)  para depois mover
                if(validacao_peca==1)
                {
                    pino1[i]=0;
                    if(coluna==2)
                    {
                        movimentos++;
                        //verificar se é o menor da coluna
                        for(int i=dificuldade; i>=1 ; i--)
                        {
                            if(pino2[i]==0)
                            {
                                pino2[i]=numero;
                                break;
                            }
                        }
                        break;
                    }
                    else if (coluna==3)
                    {
                        movimentos++;
                        //verificar se é o menor da coluna
                        for(int i=dificuldade; i>=1 ; i--)
                        {
                            if(pino3[i]==0)
                            {
                                pino3[i]=numero;
                                break;
                            }
                        }
                        break;
                    }
                }
            }
            //Se tiver no 2 pino
            else if(pino2[i]==numero)
            {
                int validacao_peca = menor_numero(numero,pino2,dificuldade);
                //verificar se é o menor (diferente de zero)  para depois mover
                if(validacao_peca==1)
                {
                    pino2[i]=0;
                    if(coluna==1)
                    {
                        movimentos++;
                        for(int i=dificuldade; i>=1 ; i--)
                        {
                            if( pino1[i]==0)
                            {
                                pino1[i]=numero;
                                break;
                            }
                        }
                        break;
                    }
                    else if (coluna==3)
                    {
                        movimentos++;
                        for(int i=dificuldade; i>=1 ; i--)
                        {
                            if( pino3[i]==0)
                            {
                                pino3[i]=numero;
                                break;
                            }
                        }
                        break;
                    }
                    
                }
            }
            //Se tiver no 3 pino
            else if(pino3[i]==numero)
            {
                int validacao_peca = menor_numero(numero,pino3,dificuldade);
                //verificar se é o menor (diferente de zero)  para depois mover
                if(validacao_peca==1)
                {
                    pino3[i]=0;
                    if(coluna==2)
                    {
                        movimentos++;
                        for(int i=dificuldade; i>=1 ; i--)
                        {
                            if( pino2[i]==0)
                            {
                                pino2[i]=numero;
                                break;
                            }
                        }
                        break;
                    }
                    else if (coluna==1)
                    {
                        movimentos++;
                        for(int i=dificuldade; i>=1 ; i--)
                        {
                            if(pino1[i]==0)
                            {
                                pino1[i]=numero;
                                break;
                            }
                        }
                        break;
                    }
                }
            }
        }

        system("clear");
        exibir_tabuleiro(dificuldade, pino1,  pino2, pino3);
        cout << "\n => Jogadas: " << movimentos <<"\n";
    }

    return 0;
}

void exibir_tabuleiro(int dificuldade, int pino1[], int pino2[], int pino3[])
{
    string nivel;

    if(dificuldade ==3)
    {
        nivel = "FÁCIL";
    }
    else if(dificuldade ==5)
    {
        nivel = "MÉDIO";

    }
    else
    {
        nivel = "DIFÍCIL";
    }

    cout << "\n================== "<<nivel<<" =====================\n";
    cout << "      A B C\n";

    for(int i = 1; i <=dificuldade; i++)
    {
         cout<< "\n["<<(i)<<"] - "<< pino1[i] << " " << pino2[i] << " " << pino3[i] << "\n";
    }
}

void alerta()
{
    cout << "\n =====JOGADA INVÁLIDA!=====\n";
}
int menor_numero(int numero , int vetor[], int dificuldade)
{
    int menor = numero;
    int resultado = 0; //0 - FALSO 1- OK

    for(int i = 1; i<= dificuldade; i++)
    {
        if((vetor[i]!=0) && (vetor[i]<numero))
        {
            menor = vetor[i];
        }
    }
    if(menor==numero)
    {
        resultado = 1;
    }
    return resultado;
}

int escolha_numero(int dificuldade)
{
    cout << "\n 0 - REINICIAR O JOGO!\n";
    cout << "\n 99 - SAIR O JOGO!\n";

    cout << "\n Escolha um dos números que deseja movimentar: ";
    int escolha = 0;
    cin >> escolha;

    if(escolha == 99)
    {
        exit(0);
    }
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

void dica ()
{
    cout << "\n========= DICA =========\n";
    cout << "Ex.: \n=> 2 (Enter)\n=> B (Enter)\n Assim você estará movendo o número 2 para a coluna B\n";
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
    cout << "\n/*\n|--------------------------------------------------------------------------\n|REGRAS DO JOGO\n|--------------------------------------------------------------------------\n|OBJETIVO: Mover todos os núméros para o pino da direita.\n|\n|REGRAS: Informando o número e a coordenada, você deve\n|mover um número de cada vez, sendo que um número maior\n|nunca pode ficar em cima de um número menor.\n|\n*/\n";
    cout << "\nDigite 0 - Voltar ao menu:";
    cin >> escolha;
    if(escolha == 0)
    {
        main();
    }
}

