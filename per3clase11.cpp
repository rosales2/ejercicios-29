#include <iostream>
using namespace std;

int main()
{
  cout << "Deme el mes: (1, 2, ..., 12): ";
  int mes;
  cin >> mes;

  if (mes > 0 && mes < 13)
    if (mes == 1)
      cout << "El mes tiene 31 días.\n";
    else if (mes == 2)
      cout << "El mes tiene 28 o 29 días.\n";
    else if (mes == 3)
      cout << "El mes tiene 31 días.\n";
    else if (mes == 4)
      cout << "El mes tiene 30 días.\n";
    else if (mes == 5)
      cout << "El mes tiene 31 días.\n";
    else if (mes == 6)
      cout << "El mes tiene 30 días.\n";
    else if (mes == 7)
      cout << "El mes tiene 31 días.\n";
    else if (mes == 8)
      cout << "El mes tiene 31 días.\n";
    else if (mes == 9)
      cout << "El mes tiene 30 días.\n";
    else if (mes == 10)
      cout << "El mes tiene 31 días.\n";
    else if (mes == 11)
      cout << "El mes tiene 30 días.\n";
    else if (mes == 12)
      cout << "El mes tiene 31 días.\n";
    else
      cout << "Imposible\n";
    else
      cout << "El valor introducido no es válido\n";
}