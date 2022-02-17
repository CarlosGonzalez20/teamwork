#include <iostream>

using namespace std;

int main()

{
    int contador=1;
    cout << "N\t" << "N*10\t" << "N*100\t" << "N*1000\t" << endl;
    while (contador <=5)
    {
        cout << contador << "\t" << contador *10 << "\t" << contador*100 << "\t" << contador*1000 << "\t" << endl;
        contador++;
    }
    return 0;
}
