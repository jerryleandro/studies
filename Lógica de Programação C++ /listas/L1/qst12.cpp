#include <iostream>

using namespace std;

int main ()
{
    int d0, m0, a0, d1, m1, a1, diaTotalAno0, diaTotalAno1;

    cout << "Insira o primeiro ano:";
    cin >>a0;
    cout << "Insira o primeiro mes:";
    cin >>m0;
    cout << "Insira o primeiro dia:";
    cin >>d0;

    diaTotalAno0 = (a0*360) + (m0*30) + (d0);

    cout << "\n ======================= \n";

    cout << "Insira o segundo ano:";
    cin >>a1;
    cout << "Insira o segundo mes:";
    cin >>m1;
    cout << "Insira o segundo dia:";
    cin >>d1;

    diaTotalAno1 = (a1*360) + (m1*30) + (d1);

    cout << "\n A diferênça entre as duas datas é de " << (diaTotalAno1-diaTotalAno0) << " dias \n";

    return 0;
}
