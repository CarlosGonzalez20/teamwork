#include<iostream>
using namespace std;
int main()
{
    int ncuenta;
    float nuevoSaldo=0;
    float saldoInicial, cargosTotales, creditosTotales, limiteCredito;
    int flag = 1;

    while (flag){

        cout<<"Introduzca el numero de cuenta (-1 para salir):";
        cin>> ncuenta;
        if (ncuenta ==-1)
            flag= 0;
        else{
            cout<<"Introduzca el saldo inicial:";
            cin>>saldoInicial;
            cout<<"Introduzca los cargos totales:";
            cin>>cargosTotales;
            cout<<"Introduzca los creditos totales:";
            cin>>creditosTotales;
            cout<<"Introduzca el limite de credito:";
            cin>>limiteCredito;
            cout<<endl;
            nuevoSaldo = (saldoInicial+cargosTotales-creditosTotales);
            cout<<"el nuevo saldo es:"<<nuevoSaldo<< endl;

            if (nuevoSaldo > limiteCredito){
                cout<<"Cuenta:"<<ncuenta<<endl;
                cout<<"Limite de credito:"<<limiteCredito <<endl;
                cout<<"Saldo:"<<nuevoSaldo<< endl;
                cout<<"se excedio el limite de su cretido"<<endl;
             }

        }

    }
    return 0;

}
