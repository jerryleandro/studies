#include <iostream>

using namespace std;

main()
{
  int numero,contador=0;

  cout << "Insira um número:";
  cin >> numero;

  cout << "\n";

  if(numero%1==0 && numero%numero==0 && numero%2!=0)
  {
    cout << numero << " É primo! \n";
  }
  else
  {
    cout << numero << " Não é primo! \n";
  }

  return 0;
}
