#include<iostream>

using namespace std;

int main() {
  double preco, percentual, imposto, lucroDistribuidor, valorImposto, valorFinal;

  cout << "Insira o preço de fábrica: ";
  cin >> preco;

  cout << "Insira o percentual de lucro do distribuidor: ";
  cin >> percentual;

  cout <<  " Insira o percentual de imposto: ";
  cin >> imposto;

  lucroDistribuidor =  (preco*percentual)/100;
  valorImposto = (preco*imposto)/100;
  valorFinal = preco+lucroDistribuidor+valorImposto;

  cout << "Lucro do distribuidor: " << lucroDistribuidor << '\n';
  cout << "impostos: " << lucroDistribuidor << '\n';
  cout << "Preço final dos veículos: " << valorFinal << '\n';

  return 0;
}
