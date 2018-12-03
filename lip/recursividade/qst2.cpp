#include <iostream>
#include <cmath>
using namespace std;

int quadrados (int n );

int main ()
{
    int n ; 
    cout << "\nInsira um numero:";
    cin >> n ;

    cout << "\n";

    cout << quadrados(n) << endl;

    return 0 ; 
}

int quadrados (int n)
{
    if( n == 1)
    {
        return 1;
    }
    else
    {
        return (n*n) + quadrados(n-1);

    } 
}

