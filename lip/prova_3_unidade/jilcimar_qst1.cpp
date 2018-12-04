#include <iostream>

using namespace std;

int produtorio (int vet[] , int n);

int main ()
{
    int n = 0 ;
    cout << "\n Digite quantos valores deseja multiplicar:";
    cin >> n;

    int vet [n];

    for(int i = 0 ; i < n ; i++)
    {
        cout << "\nDigite o " <<  (i +1) << " valor:";
        cin >> vet[i];
    }

    cout <<"\n Produto dos valores: " << produtorio(vet, (n-1));

    return 0;
}

int produtorio (int vet[] , int n)
{
    if(n>0)
    {
        return vet[n] * produtorio(vet, (n-1));
    }
    else
    {
        return 1;
    }
}
