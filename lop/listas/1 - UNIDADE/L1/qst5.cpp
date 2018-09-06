#include <iostream>

using  namespace std;

int main() {
  double raio;

  cout << "Informe um raio:";
  cin >> raio;

  if(raio>0)
  {
    float perimetro, area, volume , diametro;
    diametro = raio*2;

    perimetro = (float) diametro*3.14;
    area = (float) 3.14*(raio*raio);
    volume = (float) 4/3*3.14*(raio*raio*raio);
    cout.precision(2);
    cout << "Perímetro: " << perimetro << "\n";
    cout << "Área: " << area << "\n";
    cout << "volume: " << volume << "\n";

  }
  else
  {
    cout << "Informe um raio válido";
  }
  return 0;
}
