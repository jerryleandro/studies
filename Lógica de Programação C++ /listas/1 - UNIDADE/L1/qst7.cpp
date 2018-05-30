#include <iostream>

using namespace std;

int main()
{
  float conta,porcentagem;

  cout << "Insira o valor da conta: ";
  cin >> conta;
  cout << "Insira o valor da porcentagem do garcom: ";
  cin >> porcentagem;

  if(conta>0 && porcentagem)
  {
    float garcom = (float) (conta*porcentagem)/100;
    float subtotal = conta;

    cout.precision(4);

    cout << "Subtotal: R$" << subtotal << "\n";
    cout << "Porc. Garçom: R$" << garcom << "\n";
    cout << "Total: R$" << (subtotal+garcom) << "\n";

  }
  else
  {
    cout << "Alguma entrada inválida \n";
  }
}
