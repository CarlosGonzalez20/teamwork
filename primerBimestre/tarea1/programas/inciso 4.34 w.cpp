#include<iostream>
using namespace std;
int main()
{
    // inciso A
    int n, i, factorial;

    cout<<"Introduce un numero";
    cin>> n;
    factorial=1;
    for(i=1; i<=n; i++)
    {


        factorial=factorial*i;
    }
    cout<<"Factorial de "<<n<<"->"<<factorial<<endl;


}
