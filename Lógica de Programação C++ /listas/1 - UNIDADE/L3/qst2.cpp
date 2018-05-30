//Jilcimar da Silva Fernandes
#include <iostream>

using namespace std;

main()
{
  int idade;

  cout << "Insira a sua idade:";
  cin >>idade;

  //Verificando se a idade está entre 18 e 67 anos.
  if(idade >= 18 && idade <=67 )
  {
      cout << "Parabéns, você pode doar sangue! \n";
  }
  else
  {
    cout << "Infelizmente não você pode doar sangue! \n";
  }

  return 0;
}
