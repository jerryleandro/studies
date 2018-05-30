#include <iostream>

using namespace std;

int main ()
{
  int reais, centavos ;
  int c100=0, c50=0, c20=0, c10=0, c5=0, c2=0 , m1=0, m05=0, m025=0, m01=0 , m005=0, m001=0;

  cout << "Entre com o valor de troco \n";
  cout << "Digite o valor dos reais: ";
  cin >> reais;

  cout << "Digite os centavos: ";
  cin >> centavos;

  while(reais >0 || centavos>0)
  {
    //Cálculo para a parte das cédulas
    if(reais>=100)
    {
      c100 = (int) reais/100;
      reais = reais - (100*c100);
    }
    else if(reais >=50)
    {
      c50 = (int) reais/50;
      reais = reais - (50*c50);
    }
    else if (reais >=20)
    {
      c20 = (int) reais/20;
      reais = reais - (20*c20);
    }
    else if (reais>=10)
    {
      c10 = (int) reais/10;
      reais = reais - (10*c10);
    }
    else if (reais>=5)
    {
      c5 = (int) reais/5;
      reais = reais - (5*c5);
    }
    else if (reais >= 2)
    {
      c2 = (int) reais/2;
      reais = reais - (2*c2);
    }

    //Cálculo para a parte das modeas
    if(centavos>=99)
    {
      m1 = (int) centavos/100;
      centavos = centavos - (100*m1);
    }
    else if (centavos>=50)
    {
      m05 = (int) centavos/50;
      centavos = centavos - (50*m05);
    }
    else if (centavos>=25)
    {
      m025 = (int) centavos/25;
      centavos = centavos - (25*m025);
    }
    else if (centavos>=10)
    {
      m01 =  (int) centavos/10;
      centavos = centavos - (10*m01);
    }
    else if (centavos>=5)
    {
      m005 = (int) centavos/5;
      centavos = centavos - (5*m005);
    }
    else if (centavos>=1)
    {
      m001 = centavos/1;
      centavos = centavos - (1*m001);
    }
  }

  //Imprimindo o resultado
  cout << c100 << " cédula(s) de R$100 \n";
  cout << c50 << " cédula(s) de R$50 \n";
  cout << c20 << " cédula(s) de R$20 \n";
  cout << c10 << " cédula(s) de R$10 \n";
  cout << c5 << " cédula(s) de R$5 \n";
  cout << c2 << " cédula(s) de R$2 \n";
  cout << "\n";
  cout << m1 <<  " moeda(s) de R$1 \n" ;
  cout << m05 <<  " moeda(s) de R$0.50 \n" ;
  cout << m025 <<  " moeda(s) de R$0.25 \n" ;
  cout << m01 <<  " moeda(s) de R$0.10 \n" ;
  cout << m005 <<  " moeda(s) de R$0.05 \n" ;
  cout << m001 <<  " moeda(s) de R$0.01 \n" ;
  cout << "\n";

  return 0;
}
