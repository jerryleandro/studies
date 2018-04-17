#include <iostream>

using namespace std;

main()
{
  int numero=1,contadorimpar=0,contadortotal=0;
  cout << "Insira 0 para encerrar e calcular!";
  cout << "\n ========================= \n";

  while(numero != 0)
  {
    cout << "Insira um número:";
    cin >> numero;
    cout << "\n";

    if((numero%2!=0) && numero > 15)
    {
      contadorimpar++;
      contadortotal++;
    }
    else
    {
      contadortotal++;
    }

  }
  cout << ((contadorimpar*100)/(contadortotal-1)) << "% de números ímpares maiores que 15";
  cout << "\nTotal de ímpares > 15: " << contadorimpar << ". \nQuantidade total de números: " << (contadortotal-1) << "\n";

  return 0;
}
