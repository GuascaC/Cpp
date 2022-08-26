#include <iostream>

using namespace std;

int main()
{
    float cp1,cp2,cp3,vp1,vp2,vp3,tp,tp2,d;
    cout<<"Ingrese cantidades";
    cin>>cp1;
    cin>>cp2;
    cin>>cp3;    
    cout<<"Ingrese valores";
    cin>>vp1;
    cin>>vp2;
    cin>>vp3;    
    tp=((cp1*vp1)+(cp2*vp2)+(cp3*vp3));
    if (tp<=25000){
     cout<<"No tiene descuento,total:"<<tp;}
    else 
     cout<<"Tiene 10%";
     d=tp*0.10;
     tp2=tp-d;
     cout<<"descuento:"<<d;
     cout<<"Total:"<<tp2;
    }
