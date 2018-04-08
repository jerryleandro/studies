//Jilcimar da Silva Fernandes
#include <iostream>

using namespace std;

main ()
{

  int n1, n2, resultado;
  char operacao;

  cout << "Insira o 1 número:";
  cin >> n1;

  cout << "Insira o 2 número:";
  cin>>n2;

  cout << "\n '+' > SOMA \n '-' > SUBTRAÇÃO \n '*' > MULTIPLICAÇÃO \n '/' > DIVISÃO \n Insira a operação:";
  cin >> operacao;

  //Verificando qual a operação é para executar
  if(operacao == '+')
  {
    resultado = n1+n2;
  }
  else if (operacao == '-')
  {
    resultado = n1-n2;
  }
  else if (operacao == '*')
  {
    resultado = n1*n2;
  }
  else
  {
      resultado = n1/n2;
  }

  cout << "O resultado da operação: " << n1 << operacao << n2 << " = " << resultado << "\n";

  return 0;
}
