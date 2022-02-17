#include <iostream>

using namespace std;

 int horas;
 int couta;
 int cierre;
 int calculo;
 char empleado;

 int main()
 {

    while (cierre < 1){
    cout << "Ingrese las horas extras trabajadas" << endl;
    cin >> horas;
    cout << "Ingrese la cantidad de paga por hora" << endl;
    cin >> couta;
    cout << "Ingrese el nombre del empleado" << endl;
    cin >> empleado;
    calculo=horas*couta;


    cout << "Horas trabajadas" << horas << endl;
    cout << " Total a pagar de horas trabajadas " << "  " << calculo ;
    cout << "del trabajador" << "  " << empleado <<  endl;
    cierre = 2;
    }




return 0;


}
