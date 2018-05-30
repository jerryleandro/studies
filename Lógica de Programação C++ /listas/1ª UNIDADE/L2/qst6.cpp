#include <iostream>

using namespace std;

int main()
{
  int numero;

  cout << "Insira o número de 3 algarismo: ";
  cin >> numero;

  //Separando o número de 3 algarismo em variáveis direfentes.
  int primeiro =  ((numero/10)/10);
  int meio = ((numero/10)%10);
  int ultimo = (numero%10);

  //Digito de controle com base nas informações dadas
  int digitocontrole = (primeiro + (meio*3) + (ultimo*5));

  //O quarto digito é igual ao resto da divisão por 7
  int quarto = digitocontrole%7;

  cout << primeiro << meio << ultimo << quarto << "\n";

  return 0;
}
