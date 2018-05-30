//Jilcimar da Silva Fernandes
#include <iostream>
#include <math.h>

using namespace std;

main()
{
  int a,b,c;
  float raiz1, raiz2;

  cout << "\n Insira o A (Parte que multiplica o x²) da equação: ";
  cin >> a;

  cout << "\n Insira o B (Parte que multiplica x): ";
  cin >>b;

  cout << "\n Insira o C (pare independente): ";
  cin >>c;

  float delta = (b*b)-(4*a*c);

  if(delta > 0)
  {
    raiz1 = (-1*b + sqrt(delta))/(2*a);
    raiz2 = (-1*b - sqrt(delta))/(2*a);
    cout << "\n As raizes da equação são " << raiz1 << " e " << raiz2 << "\n";
  }
  else
  {
    if(delta<0)
    {
      cout << "\n Não há raizes na equação \n";
    }
    if(delta == 0)
    {
      raiz1 = (-1*b + sqrt(delta))/(2*a);
      cout << "\n A raiz da equação é: " << raiz1 << "\n";
    }
  }


  return 0;
}
