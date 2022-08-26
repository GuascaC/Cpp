#include <iostream>
 
using namespace std ;
 
int main()
{
 float Cm,Pm,Cp,Pp;
 float Tm;
 float Tp;
 float T;
 cout <<"Ingrese Cantidad de Manzanas:";
 cin >> Cm;
 cout <<"Ingrese Precio de Manzanas:";
 cin >>Pm;
 Tm=Cm*Pm;
 cout <<"Total Manzanas:"<< Tm;
 cout <<"Ingrese Cantidad de Peras:";
 cin >> Cp;
 cout <<"Ingrese Precio de Peras:";
 cin >>Pp;
 Tp=Cp*Pp;
 T=Tp+Tm;
 cout <<"Total Peras:"<< Tp;
 cout <<"Total :"<< T;
}
