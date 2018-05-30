//Jilcimar da Silva Fernandes
#include <iostream>

using namespace std;

main()
{
  int codigo, quantidade;
  double valor;

  cout << "\n Cachorro quente 100 \n Bauru Simples 101 \n Bauru com ovo 102 \n Hambúrguer 103 \n Cheeseburguer 104 \n Refrigerante 105 \n ";

  cout << "\n Entre com o código do pedido: ";
  cin >> codigo;

  cout << "\n Entre com a quantidade: ";
  cin >> quantidade;

  if(codigo == 100)
  {
    valor = 1.20*quantidade;
  }
  else if (codigo ==101)
  {
    valor = 1.30*quantidade;
  }
  else if (codigo == 102)
  {
    valor = 1.50*quantidade;
  }
  else if (codigo == 103)
  {
      valor = 1.20*quantidade;
  }
  else if (codigo == 104)
  {
      valor = 1.30*quantidade;
  }
  else
  {
      valor = 1*quantidade;
  }
  cout << "\n O valor total é : " << valor << "\n";

  return 0;
}
