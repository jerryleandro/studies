#include <iostream>

using namespace std;

int main()
{
  float n1,n2;

  cout << "Insira a primeira nota: ";
  cin >> n1;

  cout << "Insira segunda nota: ";
  cin >> n2;

  if(n1 >=0 && n2>=0)
  {
    float media = (((n1*6)+(n2*4))/10);

    cout.precision(2);
    cout << "A média do aluno é: " << media << "\n";
  }
  else
  {
    cout << "A nota não pode ser inferior a zero! \n";
  }

  return 0;
}
