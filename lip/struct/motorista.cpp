#include <iostream>
#include <cstring>
#define MAX 50

using namespace std;

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

void exibeCadastro (Motorista pessoa[]);

void geraAvisoData (Motorista motorista[] , int mes , int ano);

int main ()
{
    Motorista pessoa[2];
    int mes_consulta = 0 ,  ano_consulta = 0;


    cout << "\n==== CADATRO DE MOTORISTA\n";

    for(int i = 0 ; i < 2; i++)
    {
        cout << "Nome: " ;
        cin.ignore();
        cin.getline(pessoa[i].nome, MAX);
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

    //GERANDO O AVISO

    cout << "\n Insira o mes para consulta: ";
    cin >> mes_consulta;
    cout << "\n Insira o ano para consulta:";
    cin >> ano_consulta;

    geraAvisoData(pessoa ,mes_consulta , ano_consulta);

    return 0;

}

void exibeCadastro (Motorista pessoa[])
{
    cout << "\n";

    for(int i = 0 ; i < 2; i++)
    {
        cout << pessoa[i].nome << "/" << pessoa[i].cpf <<"/Nasc "
        << pessoa[i].nascimento.dia << "." << pessoa[i].nascimento.mes << "." << pessoa[i].nascimento.ano << "/Reg "
        <<  pessoa[i].registro << "/Val " << pessoa[i].validade.dia << "." << pessoa[i].validade.mes << "." << pessoa[i].validade.ano << endl;
        cout << "\n";
    }
}

void geraAvisoData (Motorista pessoa[] , int mes_consulta , int ano_consulta)
{
    for(int i = 0 ; i < 2; i++)
    {
        if(pessoa[i].validade.mes == mes_consulta &&  pessoa[i].validade.ano == ano_consulta)
        {
            cout << "\n" << pessoa[i].nome << " - Val " << pessoa[i].validade.dia << "." << pessoa[i].validade.mes << "." << pessoa[i].validade.ano << endl;
        }
    }
}


