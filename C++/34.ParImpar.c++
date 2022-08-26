#include <iostream>
using namespace std;
int main()
{
int n1;
int c ;
c=1;
while (c<=10)
{
  cout <<"Ingrese número : "; 
  cin >> n1; 
  if (n1%2==0){
   cout <<"Par,";}
  else
   cout <<"Impar,";
  c=c+1;
}
}
