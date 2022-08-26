#include <iostream>

using namespace std;

int main(void)
{
    float c, a, i;
    float x;
    cout<<"introduzca cantidad: ";
    cin >> c;
    cout<<"introduzca artículo: ";
    cin >> a;
    cout<<"introduzca iva: ";
    cin >> i;
    x=((a*c)/i);
    cout<<"Resultado :"<<x;

    return 0;
}
