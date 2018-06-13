#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int menu();
void core();

int jogar(int dificuldade, string nome);
int escolha_numero(int dificuldade, string nome);
int escolha_coluna(int dificuldade);
int menor_numero(int numero , int vetor[], int dificuldade);
int calcula_estrela(int dificuldade);

void instrucoes();
void dica();
bool checa_vitoria(int pino3[], int dificuldade);
void exibir_tabuleiro(int dificuldade, int pino1[], int pino2[], int pino3[]);
void final_jogo(int movimentos, int dificuldade, string nome);

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
    jogar(dificuldade,nome);
}

int jogar(int dificuldade, string nome)
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

    while(!vitoria)
    {
        numero = escolha_numero(dificuldade, nome);
        coluna = escolha_coluna(dificuldade);

        for(int i = 1; i <=dificuldade; i++)
        {        
            if(pino1[i]==numero)
            {
                int validacao_peca = menor_numero(numero,pino1,dificuldade);
                if(validacao_peca==1)
                {
                    int validacao_coluna2 = menor_numero(numero,pino2,dificuldade);
                    int validacao_coluna3 = menor_numero(numero,pino3,dificuldade);

                    if(coluna==2 && validacao_coluna2 ==1)
                    {
                        pino1[i]=0;
                        movimentos++;
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
                    else if (coluna==3 && validacao_coluna3 ==1)
                    {
                        pino1[i]=0;
                        movimentos++;
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
            else if(pino2[i]==numero)
            {
                int validacao_peca = menor_numero(numero,pino2,dificuldade);
                if(validacao_peca==1)
                {
                    int validacao_coluna1 = menor_numero(numero,pino1,dificuldade);
                    int validacao_coluna3 = menor_numero(numero,pino3,dificuldade);
                    if(coluna==1 && validacao_coluna1 ==1)
                    {
                        pino2[i]=0;
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
                    else if (coluna==3 && validacao_coluna3==1)
                    {
                        pino2[i]=0;
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
            else if(pino3[i]==numero)
            {
                int validacao_peca = menor_numero(numero,pino3,dificuldade);
                int validacao_coluna1 = menor_numero(numero,pino1,dificuldade);
                int validacao_coluna2 = menor_numero(numero,pino2,dificuldade);
                if(validacao_peca==1)
                {
                    if(coluna==2 && validacao_coluna2==1)
                    {
                        pino3[i]=0;
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
                    else if (coluna==1 && validacao_coluna1 == 1)
                    {
                        pino3[i]=0;
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
    
        vitoria = checa_vitoria(pino3, dificuldade);
    }

    final_jogo(movimentos,dificuldade,nome);

    return 0;
}

void final_jogo(int movimentos, int dificuldade, string nome)
{
    system("clear");
    string nivel;
    string estrelas;

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
    
    int desempenho = calcula_estrela(dificuldade);
    if(movimentos== desempenho)
    {
        estrelas = "X X X X X";
    }
    else if(movimentos == (desempenho+2)){
        estrelas = "X X X X";
    }
    else if(movimentos == (desempenho+3)){
        estrelas = "X X X";
    }
    else if(movimentos == (desempenho+4)){
        estrelas = "X X";
    }
    else
    {
        estrelas = "X";
    }
    cout << "\n/*\n|--------------------------------------------------------------------------\n|PARABÉNS " << nome<<", VOCÊ VENCEU!!!\n|--------------------------------------------------------------------------\n|\n|NÍVEL:" << nivel << "\n|\n|NÚMERO DE MOVIMENTOS NA PARTIDA: "<< movimentos<<".\n|\n|ESTRELAS: " << estrelas <<"\n|\n*/\n";
    cout <<"\n 0 - Jogar novamente\n 99 - SAIR\n";
    int escolha_final;
    cin>>escolha_final;
    if(escolha_final==0)
    {
        jogar(dificuldade,nome);
    }
    else if (escolha_final==99)
    {
        exit(0);
    }
}

int calcula_estrela(int dificuldade)
{
    int resultado = (pow(2,dificuldade))-1;
    return resultado;
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

bool checa_vitoria(int pino3[], int dificuldade)
{
    bool resposta = true;
    int correto [dificuldade];
    for(int i=1; i<=dificuldade ; i++)
    {
        correto[i] = i;
    }

    for(int i = 1; i <=dificuldade; i++)
    {
        if(pino3[i]!=correto[i])
        {
            resposta = false;
        }
    }
    return resposta;
}
int menor_numero(int numero , int vetor[], int dificuldade)
{
    int menor = numero;
    int resultado = 0;

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

int escolha_numero(int dificuldade, string nome)
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
        jogar(dificuldade,nome);
    }
    return escolha;
}

int escolha_coluna(int dificuldade)
{
    char escolha;
    int posicao =0;
    cout << "\n Escolha uma coluna que deseja movimentar: (A B C): ";
    cin >> escolha;

    if(!(escolha == 'A' || escolha == 'B' || escolha == 'C'||escolha == 'a' || escolha == 'b' || escolha == 'c'))
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

