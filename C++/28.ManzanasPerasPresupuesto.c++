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
if (Pp>799)
{
 cout <<"Muy caro";
}
else{
 cout <<"Barato,"; 
}
 T=Tp+Tm;
 cout <<"Total Peras:"<< Tp;
 cout <<"Total :"<< T;
 if (T>5000)
 cout <<"Fuera de presupuesto"<< T;
 else
 cout <<"En el presupuesto,"<< T;
}
