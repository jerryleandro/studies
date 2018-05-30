#include <iostream>

using namespace std;

int main()
{
  int metros;
  cout << "Insira a medida em metros: ";
  cin >> metros;

  if (metros>0)
  {
    float km = (float) metros/1000; // fazendo a conversão de m > km
    cout.precision(2); // limitando as casas decimais
    cout << metros << " metros é igual a " << km << " KM \n";
  }
  else
  {
      cout << "Insira a quantidade de metros valida \n";
  }
  return 0;
}
