#include <iostream>

using namespace std;

int main(void)
{
    float n1, n2;
    float p1,p2,p3,p4;
    cout<<"Introduzca número 1: ";
    cin >> n1;
    cout<<"Introduzca número 2: ";
    cin >> n2;
    p1=n1+n2;
    cout<<"Resultado suma es: "<<p1;
    p2=n1-n2;
    cout<<"Resultado resta es: "<<p2;
    p3=n1*n2;
    cout<<"Resultado multiplicación es: "<<p3;
    p4=n1/n2;
    cout<<"Resultado división es: "<<p4;
    return 0;
}
