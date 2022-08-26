#include <iostream>
using namespace std;
int main()
{
float n1;
float n;
float c ;
c=4;
while (c<=6)
{
  cout <<"Ingrese año nacimiento : "; 
  cin >> n1; 
  n=2022-n1;
  if (n1>=18)
  cout <<"Mayor de edad,";
  else
  cout <<"Menor de edad,";
  cout <<n;
  c=c+1;
}
}
