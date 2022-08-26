#include <iostream>
using namespace std;
int main()
{
int m,h,P;
cout <<"Ingrese Horas:";
cin>>h;
cout<<"Ingrese minutos:";
cin>>m;
  if (m>=0){
   h=h+1;}
  else
       cout <<"Minutos negativos!";
P=h*2500;
cout<<"Pago:"<<P;
}
