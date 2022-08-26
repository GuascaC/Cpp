#include <iostream>
using namespace std;
int main()
{
    float an;
    float edad;
    cout<<"Introduzca su fecha de nacimiento: ";
    cin>>an;
    edad=2022-an;
    if (edad>=18)
    {
        cout<<"Mayor de edad,"<< edad;
    }
    else{
        cout<<"Menor de edad,"<< edad;
    }
}
