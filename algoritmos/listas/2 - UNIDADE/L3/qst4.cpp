#include <iostream>

using namespace std;

int main ()
{
    int n=0,m=0;
    cout << "Insira o primeiro número:";
    cin >> n;
    cout << "\nInsira o segundo número:";
    cin >> m;

    int vetor[n-m];
    int divisivel = 0 ;
    for(int i = m ; i<=n ; i++)
    {
        vetor[i]=i;
        cout << vetor[i] << " ";
        if(vetor[i]%2==0 && vetor[i]%3==0)
        {
            divisivel++;
        }
    }
    cout << "\n" << divisivel << " números são divisivel por 3 e são pares ao mesmo tempo\n";
    return 0;
}
