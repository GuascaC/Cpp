#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
float n1,n2,n3,nd ;
cout<<"Ingrese Nota 1: ";
cin >> n1;
cout<<"Ingrese Nota 2: ";
cin >> n2;
cout<<"Ingrese Nota 3: ";
cin >> n3;
nd=(n1*0.40)+(n2*0.20)+(n3*0.40);
cout<<fixed;
cout<<"El Promedio es: "<<setprecision(2)<< nd;

    return 0;
}
