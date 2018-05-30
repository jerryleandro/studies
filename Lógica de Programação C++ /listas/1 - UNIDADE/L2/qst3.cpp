#include <iostream>

using namespace std;

int main ()
{
  float gasolina, kmi, kmf;

  cout << "Insira o preço da gasolina: ";
  cin >> gasolina;

  cout << "Insira o KM inicial: ";
  cin >> kmi;

  cout << "Insira o KM final: ";
  cin >> kmf;

  if(gasolina>0 && kmf >0)
  {
    float dst = kmf -kmi;
    float preco = (dst/12)*gasolina;
    cout.precision(2);
    cout << "Entre o KM " << kmi << " e o KM " << kmf << " você irá pecorrer " << dst << "KM e vai gastar R$" << preco << "\n";
  }
  else
  {
    cout << "Alguns dos valores são inválidos! \n";
  }

  return 0;
}
