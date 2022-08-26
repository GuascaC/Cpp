#include <iostream>

using namespace std;

int main()
{
float n,s,x;
cout<<"Ingrese un número entero";
cin>>n;
s=0;
x=1;
while(n>x){
 s=s+x;
 x=x+1;
 cout<<x<<endl;
}
cout<<"Suma:"<<s;
}
