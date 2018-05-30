#include <iostream>

using namespace std;

main()
{
  int numero=1,soma=0;
  cout << "Insira um número negativo para encerrar e calcular!";
  cout << "\n ========================= \n";

  while(numero >= 0)
  {
    cout << "Insira um número:";
    cin >> numero;
    cout << "\n";

    if(numero%3==0 && numero%5==0)
    {
      soma+=numero;
    }

  }
  cout << "\n Soma = " << soma << "\n";

  return 0;
}
