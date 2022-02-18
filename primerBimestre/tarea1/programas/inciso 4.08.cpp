#include <iostream>

using namespace std;

int main()
{
    int potencia=1, i=1, x, y;
    cout << "Ingrese la base: ";
    cin >> x;
    cout << "Ingrese el exponente: ";
    cin >> y;
    while (i<=y)
    {
        potencia *=x;
        ++i;
    }
    cout << potencia << endl;
    return 0;
}
