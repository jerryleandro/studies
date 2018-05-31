#include <iostream>

using namespace std;

int main ()
{
    int n;
    cout << "Insira um número:";
    cin >> n;

    if(n%2!=0 && n>=3)
    {
         int v[n];

        for (int i =0; i < n; i++)
        {
            cout << "Insira o " << (i+1) << " do vetor:";
            cin >> v[i];
        }
        //b

        int primeiros = n/2;
        float media = 0;
        for (int i =0 ; i <= primeiros; i++)
        {
            media += v[i];
        }
        cout << "\n A média dos números inferiores:" << (media/primeiros) << "\n";

        int cont = 0;
        //c 
        for(int i = primeiros; i < n; i++)
        {
            if(v[i]%5==0 && v[i]%2!=0)
            {
                cont++;
            }
        }
        cout << "\n Divisiveis por 5 e não por 2:" << cont << "\n";

    }
    else
    {
        cout << "Número inválido";
    }

 

    
    return 0;
}