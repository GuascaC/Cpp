#include <iostream>
 
using namespace std ;
 
int main()
{
 float V, P, A ;
 float X1, X2, X3 ;
 	cout <<"Ingrese preguntas correctas:";
 cin >> V;
 cout <<"Ingrese total preguntas:";
 cin >> P;
 X1=50/P;
 X2=X1*V;
 cout <<"parcial:"<<X2;
 cout <<",ingrese nota actividad:";
 cin >> A;
 X3=(A*0.30)+(X2*0.70);
 if (X3>=30)
cout <<"Pasa:"<<X3;
 else
 cout <<"No pasa:"<<X3;
}
