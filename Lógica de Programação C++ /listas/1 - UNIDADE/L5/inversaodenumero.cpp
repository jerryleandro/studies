#include <iostream>
using namespace std;

main ()
{
  int numero, primeiro, meio, ultimo;

  cout << "Insira um número: ";
  cin >> numero;

  //Cálculo para separar os números
  ultimo = numero%10;
  meio = (numero/10)%10;
  primeiro = (numero/100)%10;

  cout <<"\n"<< ultimo << meio << primeiro << "\n";

  return 0;
}
