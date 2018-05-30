#include <iostream>

using namespace std;

int main()
{
  int a,b,inicioA,inicioB;

  cout << "Insira o valor de A:";
  cin >>a;
  inicioA =a;

  cout << "Insira o valor de B:";
  cin >>b;
  inicioB = b;

  a = b;
  b =inicioA;


  cout << "\n";
  cout << "Valor inicial de A: " << inicioA << "\n";
  cout << "Valor inicial de B: " << inicioB << "\n";
  cout << "=============================== \n";
  cout << "Valor final de A: " << a << "\n";
  cout << "Valor final de B: " << b << "\n";

  return 0;
}
