#include <iostream>

using namespace std;

int main()
{
  float conta;

  cout << "Insira o valor da conta: ";
  cin >> conta;

  if(conta>0)
  {
    float garcom = (float) (conta*10)/100;
    float subtotal = conta;

    cout.precision(4);

    cout << "Subtotal: R$" << subtotal << "\n";
    cout << "Porc. Garçom: R$" << garcom << "\n";
    cout << "Total: R$" << (subtotal+garcom) << "\n";

  }
  else
  {
    cout << "Entrada inválida";
  }
}
