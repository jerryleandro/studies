#include <iostream>

using namespace std;

int main ()
{
    int intervalo, dias, horas, minutos;

    cout << "Insira o intervalo de minutos:";
    cin >> intervalo;

    dias = (intervalo/60)/24;

    intervalo = intervalo - ((dias*24)*60);

    horas = intervalo/60;

    minutos = intervalo - (horas*60);

    cout << "\n";
    cout << intervalo << " minutos = " << dias << " dias, " << horas << " horas e " << minutos << " minutos \n";

}
