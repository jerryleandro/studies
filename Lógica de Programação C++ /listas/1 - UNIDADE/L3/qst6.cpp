//Jilcimar da Silva Fernandes
#include <iostream>
#include <math.h>

using namespace std;

main()
{
  char entrada;

  cout << "Insira o seu caractere:";
  cin >> entrada;

  if (entrada == 'a' || entrada =='e' || entrada == 'i' || entrada == 'o' || entrada =='u')
  {
    cout << entrada << " é uma vogal! \n";
  }
  else if (entrada == 'b'|| entrada == 'c' || entrada == 'd'
        ||entrada == 'f' || entrada == 'g' || entrada == 'g'
        ||entrada == 'j' || entrada == 'k' || entrada == 'l'
        || entrada == 'm'|| entrada == 'n' || entrada == 'o'
        || entrada == 'p'|| entrada == 'q' || entrada == 'r'
        ||entrada == 's' || entrada == 't' || entrada == 'v'
        || entrada == 'x'|| entrada == 'w' || entrada == 'y'
        || entrada == 'z')
  {
    cout << entrada << " é uma consoante! \n";
  }
  else
  {
    cout << entrada << " é um símbolo qualquer! \n";
  }

  return 0;
}
