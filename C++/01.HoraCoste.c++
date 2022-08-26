#include <iostream>

using namespace std;

int main(void)
{
    float h, c;
    float p1,p2,p3,p4;
    cout<<"Introduzca Horas: ";
    cin >> h;
    cout<<"Introduzca Coste: ";
    cin >> c;
    p1=h+c;
    cout<<"Resultado suma es: "<<p1;
    p2=h-c;
    cout<<"Resultado resta es: "<<p2;
    p3=h*c;
    cout<<"Resultado multiplicación es: "<<p3;
    p3=h/c;
    cout<<"Resultado división es: "<<p4;
    return 0;
}
