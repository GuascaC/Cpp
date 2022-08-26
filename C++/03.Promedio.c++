#include <iostream>

using namespace std;

int main(void)
{
    float n1, n2, n3;
    float nd;
    cout<<"Nota 1: ";
    cin >> n1;
    cout<<"Nota 2: ";
    cin >> n2;
    cout<<"Nota 3: ";
    cin >> n3;
    nd=(n1*0.40)+(n2*0.20)+(n3*0.40);
    cout<<"Nota final :"<<nd;

    return 0;
}
