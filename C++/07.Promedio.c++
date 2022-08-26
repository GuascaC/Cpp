#include <iostream>
using namespace std;
int main()
{
float n1, n2, n3;
float nd;
cout <<"Ingrese nota 1 :";
cin >> n1 ;
cout <<"Ingrese nota 2: ";
cin >> n2 ;
cout <<"Ingrese nota 3: ";
cin >> n3 ;
nd=(n1*10/100)+(n2*60/100)+(n3*30/100);

if (nd>=30){
cout <<"Pasa, Nota: "<<nd;
}
else {
cout <<"No pasa, Nota: "<<nd;

}
    return 0;
}
