#include <iostream>

using namespace std;

main()
{
  int numero, aux;

  cout << "Insira um número: ";
  cin >> numero;

  aux = numero;
  while(numero>1) {
    aux = aux*(numero-1);
    numero--;
  }

  cout << "\n O fatorial do número é: " << aux << "\n";
  return 0;
}
