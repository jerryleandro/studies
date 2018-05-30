#include <iostream>

int main() {
  int horas;

  std::cout << "Insira a quantidade de horas: ";
  std::cin >> horas;

  //Fazendo uma validação na entrada

  if(horas>0)
  {
    float dias = (float) horas/24; //Convertendo as horas em dias

    std::cout.precision(2); //Duas casas decimais após a vírgula

    std::cout << horas << " horas é o equivalente a " << dias << " dia(s) \n";
  }
  else
  {
      std::cout << "O número válido de horas\n";
  }
  return 0;


}
