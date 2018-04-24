#include <iostream>

using namespace std;
int main() {
  int horas;

  cout << "Insira a quantidade de horas: ";
  cin >> horas;

  //Fazendo uma validação na entrada

  if(horas>0)
  {
    float dias = (int) horas/24; //Convertendo as horas em dias
    cout.precision(2); //Duas casas decimais após a vírgula

    cout << horas << " horas é o equivalente a " << dias << " dia(s)"
    << "e " << (horas%24) << " horas \n";
  }
  else
  {
    cout << "O número válido de horas\n";
  }
  return 0;


}
