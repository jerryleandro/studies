#include <iostream>

using namespace std;

int main()
{

  float salario;
  cout << "Insira o seu salario: ";
  cin >> salario;

  if(salario>0)
  {
    float ajuste = salario*0.12;

    cout << "O salário reajustado é " << (salario+ajuste) <<  "\n";
  }
  else
  {
    cout << "Não é válido o valor informado";
  }

  return 0;
}
