#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
    int v[3];
    int v2[3];

    for(int i = 0 ; i < 3; i++)
    {
        cout << "Insira a coordenada " << (i+1) << " do 1º vetor:";
        cin >> v[i];
        cout << "\nInsira a coordenada " << (i+1) << " do 2º vetor:";
        cin >> v2[i];
    }

    float distancia = (pow(2,v[0]-v2[0]));

    
    
    return 0;
}