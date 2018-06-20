#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
    int v[3];
    int v2[3];

    for(int i = 0 ; i < 3; i++)
    {
        cout << "Insira o " << (i+1) << " coordenada do vetor 1:";
        cin >> v[i];
        cout << "\nInsira o " << (i+1) << " coordenada do vetor 2:";
        cin >> v2[i];
    }
    float coordenada1 = (pow(2,(v2[0]-v[0])));
    float coordenada2 = (pow(2,(v2[1]-v[1])));
    float coordenada3 = (pow(2,(v2[2]-v[2])));

    float distancia = coordenada1 + coordenada2  + coordenada3 ;
    
    cout.precision(2);
    cout << "A distância entre os dois pontos é:" << sqrt(distancia) <<" \n";

    return 0;
}