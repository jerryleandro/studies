#include <iostream>
using namespace std;

int produtorio (int n );

int main ()
{
    int n ; 
    cout << "\nInsira um numero:";
    cin >> n ;

    cout << "\n";

    cout << produtorio(n) << endl;

    return 0 ; 
}

int produtorio (int n)
{
    if( n == 1)
    {
        return 1;
    }
    else
    {
        
        return produtorio(n-1)*n;
    }
        
}

