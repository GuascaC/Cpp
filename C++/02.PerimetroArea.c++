#include <iostream>

using namespace std;

int main(void)
{
    float L1, L2, H;
    float p,a;
    cout<<"Introduzca Lado 1: ";
    cin >> L1;
    cout<<"Introduzca Lado 2: ";
    cin >> L2;
    cout<<"Introduzca Altura: ";
    cin >> H;
    p=2*L1+2*L2;
    cout<<"Perímetro: "<<p;
    a=L1*H;
    cout<<"Area: "<<a;
    return 0;
}
