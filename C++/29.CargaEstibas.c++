#include <iostream>
 
using namespace std ;
 
int main()
{
 float B,A,E ;
 float Ce ;
 float C ;
 	cout <<"Ingrese Base:";
 cin >> B;
 cout <<"Ingrese Altura:";
 cin >> A;
 Ce=B*A;
 cout <<"Cantidad por Estiba:"<<Ce ;
 cout <<",Ingrese Cantidad de Estibas:";
 cin >> E;
 C=Ce*E ;
if (C>500)
cout <<"Excede Carga"<<C;
else
cout <<"Sin problemas"<<C;
}
