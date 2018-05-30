#include <iostream>

using namespace std;

int main ()
{
  //a
  int numeros[12];

  //b
  numeros[1] =  108;
  numeros[3] =108;
  numeros[10] = 108;

  //c
  numeros[2] = numeros[1]-8;
  numeros[4] = numeros[3]+6;

  //d
  numeros[6] = 11;
  numeros[8] = 32;
  numeros[10] = 33;
  numeros[11] = 87;

  //e
  numeros[5] = 5 + (3*numeros[7]);
  numeros[7] = numeros[5]+10;

  //f
  numeros[numeros[5]] = 72;

  //g
  numeros[4] = numeros[8];

  //h
  numeros[6] = 3;
  numeros[11] = 4;

  //i
  numeros[0] = 1;
  numeros[8] = 66;

  //j
  for (int i = 11; i>=0;i--)
  {
    cout << char(numeros[i]);
  }

  return 0;
}
