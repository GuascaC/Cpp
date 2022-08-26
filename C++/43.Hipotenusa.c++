#include <math.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
    int c1,c2;
    int h;
    cout<<"Ingrese Cateto1";
    cin >> c1;
    cout<<"Ingrese Cateto2 ";
    cin >> c2;
    h=(c1^2+c2^2)^1/2;
    cout<<"Hipotenusa:",h;

}
