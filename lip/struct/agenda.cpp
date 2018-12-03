#include <iostream>
#include <cstring>
#define MAX 50

using namespace std;

struct Data{
    int dia, ano;
    char mes [MAX];
};
struct Endereco{
    char rua[MAX], numero[MAX], bairro[MAX], complemento[MAX], cep[MAX], cidade[MAX], estado[MAX], pais[MAX];
};

struct Contato
{
    char nome[MAX];
    char sobrenome[MAX];
    char telefone[MAX];
    char email[MAX];
    Endereco endereco;
    Data data;
};

int main ()
{
    Contato agenda[3];
    int respo = 0;

    while(respo <6)
    {

            cout << "\n###### AGENDA ######\n";
            cout << "\n1-CADASTRAR\n2-BUSCAR\n3-DELETAR\n4-EXIBIR TODOS\n5- ANIVERSARIANTES\n6-SAIR";
            cout << "\n => ESCOLHA UMA OPÇÃO:";
            cin >> respo;

            if(respo==1)
            {
                //cadastrar
                for(int i = 0 ; i < 2; i++)
                {
                    cout << "\n=== CONTATO ===\n";
                    cout << "\nNome:";
                    cin >> agenda[i].nome;
                    cout << "\nSobrenome:";
                    cin >> agenda[i].sobrenome;
                    cout <<"\nTelefone:";
                    cin >> agenda[i].telefone;
                    cout << "\nEmail";
                    cin >> agenda[i].email;

                    cout << "\n=== ANIVERSÁRIO ==\n:";
                    cout << "\n Dia: ";
                    cin >> agenda[i].data.dia;
                    cout << "\n Mês: ";
                    cin >> agenda[i].data.mes;
                    cout << "\n Ano: ";
                    cin >> agenda[i].data.ano;

                    cout << "\n=== ENDEREÇO ==\n:";
                    cout << "\n Rua: ";
                    cin >> agenda[i].endereco.rua;
                    cout << "\n Bairro: ";
                    cin >> agenda[i].endereco.bairro;
                    cout <<"'\n Complemento: ";
                    cin >> agenda[i].endereco.complemento;
                    cout << "\n CEP: ";
                    cin >> agenda[i].endereco.cep;
                    cout << "\n CIDADE: ";
                    cin >> agenda[i].endereco.cidade;
                    cout << "\n ESTADO: ";
                    cin >> agenda[i].endereco.estado;
                    cout << "\n PAIS: ";
                    cin >> agenda[i].endereco.pais;
                }

            }
            else if(respo==2)
            {
                //buscar
                char busca[MAX];
                cout << "\n Insira o nome que deseja buscar na sua agenda: ";
                cin >> busca;

                for(int i = 0 ; i < 2 ; i ++)
                {
                    if(strcmp(agenda[i].nome, busca) == 0)
                    {
                        //São iguais

                        int op = 0;
                        cout << "\nQual dado deseja exibir desse contato?: ";
                        cout << "\n1- Sobrenome\n2-Telefone\n3-Email ";
                        cin >> op;
                        cout <<"\n";

                        if (op==1)
                        {
                            cout << "\n" << agenda[i].sobrenome ;
                        }
                        else if (op==2)
                        {
                            cout << "\n" << agenda[i].telefone ;
                        }
                        else if (op==3)
                        {
                            cout << "\n" << agenda[i].email ;
                        }
                        cout << "\n";
                    }
                }

            }
            else if (respo==3)
            {
                //deletar


            }
            else if (respo==4)
            {
                cout << "\n === LISTAGEM DOS CONTATOS===\n";
                for(int i = 0 ; i < 2; i++)
                {
                    cout << "\n Nome:" << agenda[i].nome << " " << agenda[i].sobrenome << endl;;
                    cout << "\n Telefone:" << agenda[i].telefone << endl;
                    cout << "\n Email:" << agenda[i].email << endl; ;
                    cout << "\n" << agenda[i].data.dia << " de " << agenda[i].data.mes << " de " << agenda[i].data.ano << endl;

                }
                cout <<"\n";
            }
            else if (respo==5)
            {
                //buscar mes
                char mes[MAX];
                cout << "\n Insira o mes: ";
                cin >> mes;

                //aniversariantes
                for(int i = 0 ; i < 2; i++)
                {
                   if(strcmp(agenda[i].data.mes, mes) == 0)
                    {
                        cout << "\n " << agenda[i].nome << " dia " << agenda[i].data.dia << endl;
                    }

                }

            }
    }
    cout << "\n ====== PROGRAMA ENCERRADO ==== \n";
    return 0;
}


