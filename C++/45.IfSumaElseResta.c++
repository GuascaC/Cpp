#include <iostream>

using namespace std;

int main()
{
float a,b,c,r,s,d,m;
 cout<<"Ingrese un entero postivo";
 cin>>a;
 cout<<"Ingrese otro";
 cin>>b;
 cout<<"Uno más";
 cin>>c;
if (a>=0&&b>=0&&c>=0){
    if (a>b){
        r=a-b;
        d=a/d;
        cout<<"Diferencia:"<<r<<".División:"<<d;
}
    else {
        s=a+b;
        m=a-b;
        cout<<"Suma:"<<s<<".Producto:"<<m;
    }
}
else {
    cout<<"Ingrese números enteros";
}
}
