#include <iostream>

using namespace std;

int main()
{
  int numero;

  cout << "Insira o número:";
  cin >> numero;
  cout << "\n";

  cout << (numero%10) << "" <<(((int)numero/10)%10) << "" << ((numero/10)/10) << "\n";
  return 0;
}
