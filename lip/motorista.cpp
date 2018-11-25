#include <iostream>
#include <cstring>
#define MAX 50

using namespace std;

Motorista exibeCadastro (Motorista motorista[]);
Motorista geraAvisoData (Motorista motorista[] , int mes , int ano);

struct Data{
    int dia, mes, ano;
};

struct Motorista
{
    char nome[MAX];
    char cpf[MAX];
    char registro[MAX];
    Data nascimento;
    Data validade;
};


int main ()
{
    Motorista pessoa[2];

    cout << "\n==== CADATRO DE MOTORISTA\n";
    
    for(int i = 0 ; i < 2; i++)
    {
        cout << "Nome: " ;
        cin >> pessoa[i].nome;
        cout << "CPF: " ;
        cin >> pessoa[i].cpf;
        cout << "Registro: " ;
        cin >> pessoa[i].registro;

        cout  << "\n Dia nascimento";
        cin >> pessoa[i].nascimento.dia;
        cout  << "\n Mês nascimento";
        cin >> pessoa[i].nascimento.mes;
        cout  << "\n Ano nascimento";
        cin >> pessoa[i].nascimento.ano;

        cout  << "\n Dia Vencimento";
        cin >> pessoa[i].validade.dia;
        cout  << "\n Mês Vencimento";
        cin >> pessoa[i].validade.mes;
        cout  << "\n Ano Vencimento";
        cin >> pessoa[i].validade.ano;
    }

    //EXIBINDO OS DADOS

    exibeCadastro(pessoa);

    return 0;
  
}

Motorista exibeCadastro (Motorista motorista[])
{
    cout << "\n";

    for(int i = 0 ; i < 2; i++)
    {
        cout << motorista[i].nome << "/" << motorista[i].cpf <<"/Nasc " 
        << motorista[i].nascimento.dia << "." << motorista[i].nascimento.mes << "." << motorista[i].nascimento.ano << "/Reg "
        <<  motorista[i].registro << "/Val " << motorista[i].validade.dia << "." << motorista[i].validade.mes << "." << motorista[i].validade.ano << endl;
    }
}

Motorista geraAvisoData (Motorista motorista , int mes , int ano)
{
   
}


