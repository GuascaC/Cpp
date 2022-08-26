C++
#include <iostream>
using namespace std ;
int main()
{
 float M,P;
 float T;
 cout <<"Ingrese Cantidad de Manzanas:";
 cin >> M;
 cout <<"Ingrese Precio de Manzanas:";
 cin >>P;
 T=M*P;
 if (T>3000)
 cout <<"Fuera de presupuesto"<< T;
 else
 cout <<"En el presupuesto,"<< T;
}
