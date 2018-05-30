#include <iostream>

using namespace std;

main()
{
  int numero,anterior=0,atual=0;

  cout << "Insira o tamanho da sua sequência de Fibonacci: ";
  cin >> numero;

  cout << "0,"; //Imprimindo o 1 número que é fixo;
  for(int i = 1; i < (numero); i++) // O laço termina no tamanho digitado pelo usuário;
  {
    if(i<2) // Se for menor que 2 (ou seja, 1) irá imprimir o 1 e atribuir ele a variável atual;
    {
      atual = i;
      cout << i<<"," ;
    }
    else
    {
      atual += anterior; //Somando o valor da variavel atual com o da variavel anterior;
      anterior = atual-anterior; //variavel anterior será o valor da atual menos o seu valor;

      cout << atual << ","; //Imprimindo o valor da variável atual;
    }

  }
  cout << "\n";
  return 0;
}
