#include <iostream>

using namespace std;

main()
{
  int numero;

  cout << "Insira um número:";
  cin >> numero;

  cout << (numero%10) << "" <<(((int)numero/10)%10) << "" << ((numero/10)/10) << "\n";

  return 0;
}
