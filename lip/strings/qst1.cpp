#include <iostream>
#include <cstring>

using namespace std;

int main ()
{
    char s [100];
    char s2 [100];
    char condicao [] = "Encerrar";
    do
    {
    
        int op =0 ;

        char inverte [100] = "";

        cout << "\nInsira sua string: ";
        cin >> s;

        if(strcmp(s, condicao) == 0)
        {
            break;
        }
      
        cout << "\n1-Tamanho\n2-Comparar\n3-Concatenar\n4-Inverter: ";
        cin >> op;
      
        if(op ==1 )
        {
            cout << "\nTamanho: " << strlen(s);
        }
        else if (op==2)
        {
            cout << "\nInsira sua 2ª string: ";
            cin >> s2;

            if(strcmp(s, s2) == 0)
            {
                cout << "\nSão iguais";
            }
            else
            {
                cout << "\nSão diferentes";
            }
        }
        else if (op==3)
        {
            cout << "\nInsira sua 2ª string: ";
            cin >> s2;
            cout << strcat (s, s2);
        }
        else if (op==4)
        {
            for (int i = strlen(s); i >= 0; i--)
            {
                cout << s[i];
            }
        }

    }while(strcmp(s, condicao) != 0);
    
    cout << "\n Programa encerrado!" << endl;   


    return 0;
}