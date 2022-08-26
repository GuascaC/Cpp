#include <iostream>
using namespace std;
int main()
{
	float f,k;
    cout<<"Digite los fahrenheit: ";
	cin>>f;
	k= ((f - 32) * 5/9) + 273.15;
    cout<<"Los kelvin son: "<<k;
}
