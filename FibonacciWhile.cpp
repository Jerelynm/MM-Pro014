//BUCLE WHILE
// Programa que genera la secuencia de Fibonacci hasta el numero ingresado por el usuario

#include <iostream>
using namespace std;

int main() {
    int h, x=0, y=1, z=1;

    cout<<"Digite un numero: "<<endl;
    cin>>h;

    cout <<"1 "<<endl;
    while (z<=h) {
        z = x + y;
        cout << z << " "<<endl;
        x = y;
        y = z;
    }
    cout<<"\n";
    return 0;
}