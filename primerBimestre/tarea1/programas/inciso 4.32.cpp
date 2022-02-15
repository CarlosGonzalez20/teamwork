#include <iostream>
using namespace std;
int main ()
{
double a, b, c;

cout << "      *****Bienvenidos*****" << endl;
cout << "==Carlos Gonzalez, 9959-20-6164==" << endl;
cout << "\nEscribe 3 medida de angulos de un triangulo y te dire cual es....\n" << endl;
cout << "Ingresa el Lado A: " ; cin >> a;
cout << "Ingresa el Lado B: " ; cin >> b;
cout << "Ingresa el Lado C: " ; cin >> c;


if(a==b&&a==c)
{
cout << "\nSon medida de un triangulo Equilatero\n"<<endl;
}

else if(a==b||a==c||a==c)
{
cout << "\nSon medidas de un triangulo Isosceles\n"<<endl;
}

else if(a!=b&&a!=b&&b!=c)
{
cout << "\nSon medida de un triangulo Escaleno\n"<<endl;
}

}
