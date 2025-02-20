//Programa que verifica cual de los tres numeros es mayor
#include <iostream>
using namespace std;

int main() {
    //Variables
    int a, b, c;

    cout<<"Digite tres numeros: "<<endl;
    cin>>a>>b>>c;

    if (a == b && b == c) {
        cout << "Los tres numeros son iguales" << endl;
    } else {
        if (a >= b && a >= c) {
            cout << "El numero " << a << " es el mayor" << endl;
        } else if (b >= a && b >= c) {
            cout << "El numero " << b << " es el mayor" << endl;
        } else {
            cout << "El numero " << c << " es el mayor" << endl;
        }
    }
    return 0;
}