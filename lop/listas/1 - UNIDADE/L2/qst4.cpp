#include <iostream>

using namespace std;

int main ()
{
  float horas,salario,extras;

  cout << "Insira o número de horas trabalhadas: ";
  cin >> horas;

  cout << "Insira o valor do salário mínimo: ";
  cin >> salario;

  cout << "Insira a quantidade de horas extras trabalhadas: ";
  cin >> extras;

  if (horas >0 && salario >0 && extras >0)
  {
      float precohoras = salario/8;
      float precoextras = salario/4;

      float totalhoras = horas*precohoras;
      float totalextras = extras*precoextras;

      cout.precision(10);

      cout << "O valor total do seu salário é: R$" << (totalhoras+totalextras) << "\n";
  }
  else
  {
    cout << "Algum valor está errado";
  }
  return 0;
}
