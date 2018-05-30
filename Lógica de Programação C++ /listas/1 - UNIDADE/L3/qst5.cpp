//Jilcimar da Silva Fernandes
#include <iostream>
#include <math.h>

using namespace std;

main()
{
  int n1, n2 , n3;

  cout << "\n Insira o 1 lado do triângulo: ";
  cin >> n1;

  cout << "\n Insira o 2 lado do triângulo: ";
  cin >> n2;

  cout << "\n Insira o 3 lado do triângulo: ";
  cin >> n3;

  //Verificando se é triângulo
  if(n1 < (n2+n3))
  {
    if (n1==n2 && n1==n3 && n2 ==n3)
    {
      cout << n1 << n2 << n3 << " Numeros formam um triangulo equilatero  \n";
    }
    else if (n1 == n2 || n1 == n3 || n2 ==n3)
    {
      cout << n1 << n2 << n3 << " Numeros formam um triangulo isósceles \n";

    }
    else if (n1 != n2 && n2 != n3 && n3 != n1)
    {
      cout << n1 << n2 << n3 << " Numeros formam um triangulo escaleno \n";
    }
  }
  else
  {
    cout << n1 << n2 << n3 << " Os números não formam um triângulo \n";
  }
  return 0;
}
