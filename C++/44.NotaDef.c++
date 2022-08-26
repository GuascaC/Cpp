#include <math.h>
#include <iostream>
using namespace std;

int main(void)
{
float nota1, nota2, nota3,nota4, nota5, n;
float notadefinitiva ; 
 n=1;
 while (n<=16){
 cout <<"Ingrese la primera nota:";
 cin >> nota1;
 cout <<"Ingrese la segunda nota:";
 cin >> nota2;
  cout <<"Ingrese la tercera nota:";
 cin >> nota3;
  cout <<"Ingrese la cuarta nota:";
 cin >> nota4;
  cout <<"Ingrese la quinta nota:";
 cin >> nota5;
 notadefinitiva=(nota1*0.10)+(nota2*0.20)+(nota3*0.30)+(nota4*0.10)+(nota5*0.30);
 if (notadefinitiva>=30)
  cout <<"Aprobó:"<<notadefinitiva<<endl;
 else
  cout <<"Necesita un curso de recuperación:"<<notadefinitiva<<endl;
  n=n+1;
}
}
