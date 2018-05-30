#include <iostream>

using namespace std;

int main()
{
  float altura, massa;

  cout << "Insira sua altura (metros): ";
  cin >> altura;

  cout << "Insira seu peso (KG): ";
  cin >> massa;

  if (altura>0 && massa>0)
  {
    float imc = (float) (massa)/(altura*altura);
    cout.precision(2);
    cout << "Seu IMC é igual a " << imc << "\n";

  }
  else
  {
      cout << "Algum dos valores são inválidos! \n";
  }

  return 0;
}
