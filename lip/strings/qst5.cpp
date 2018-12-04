#include <iostream>
#include <cstring>
#define MAX 100
using namespace std;


main()
{
    char nome[3][MAX];
    float media[3];

    for(int i = 0 ; i < 3; i++)
    {
        cout << "\nNome do(a) aluno(a):";
        cin.getline(nome[i], MAX);
        cout << "\nMédia do aluno(a):";
        cin >> media[i];
        cin.ignore();

        if(media[i] < 0)
        {
            break;
        }
    }

    //Alunos aprovados (Media >=5)
    cout << "\nAnulos aprovados: \n";
    for(int i = 0 ; i < 3 ; i++)
    {
        if(media[i]>=5)
        {
            cout << nome[i] << " " << media[i] << "\n";
        }
    }

    //Alunos reprovadoss (Media <+5)
    cout << "\nAnulos reprovados: \n";
    for(int i = 0 ; i < 3 ; i++)
    {
        if(media[i]<5 && media[i]>=0)
        {
            cout << nome[i] << " " << media[i] << endl;
        }
    }

    return 0;
}
