#include <iostream>

using namespace std;

main()
{
  int numero,contador=0;

  cout << "Insira um número:";
  cin >> numero;

  cout << "\n";

  for(int i= 1 ;i <=numero; i++)
  {
    if(numero%i==0)
    {
      contador++;
    }
  }
  cout << "O número " << numero << " tem " << contador << " divisores \n";
  return 0;
}
