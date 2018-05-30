#include <iostream>

using namespace std;

main()
{
  int numero;

  cout << "Insira um número:";
  cin >> numero;

  cout << "\n";

  for(int i= 1 ;i <=numero; i++)
  {
    if(numero%i==0)
    {
      cout << i << " É um divisor de " << numero << "\n";
    }
    else
    {
      cout << i << " Não é um divisor de " << numero << "\n";
    }
  }
  return 0;
}
