//BUCLE WHILE
//Programa que pida ingresar un numero y luego imprima todos los numeros pares hasta ese numero

#include <iostream>
using namespace std;

int main() {
    int MB, i=2;
    cout<<"Ingrese un numero: "<<endl;
    cin>>MB;

    while (i<=MB) {
        cout<<i<<endl;
        i+=2;
    }
    return 0;
}