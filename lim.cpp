//BUCLE WHILE
// Programa que imprime todos los numeros del 1 hasta el numero ingresado por el usuario

#include <iostream>
using namespace std;

int main() {
    int ut, i=1;

    cout << "Ingrese un numero entero: "<<endl;
    cin>>ut;

    if (ut<1) {
        cout<<"El numero no es valido"<<endl;
    } else {
        while (i<=ut) {
            cout<<i<<endl;
            i++;
        }
        cout<<endl;
    }
    return 0;
}