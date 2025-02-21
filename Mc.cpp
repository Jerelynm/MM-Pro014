//BUCLE WHILE
//Programa que permite ingresar numeros hasta que la suma de los numeros pares sea mayor a 100

#include <iostream>
using namespace std;

int main() {
    int rz, suma=0;

    cout<<"Ingrese un numero positivo: "<<endl;
    cin>>rz;

    while (rz>=0) {
        if (suma + rz > 100) {
            cout << "La suma ha alcanzado el limite de 100." << endl;
            break; // Salir porque alcanzo el limite
        }
        suma+=rz;
        cout<<"Ingrese otro numero: "<<endl;
        cin>>rz;
    }
    cout<<"La suma es: "<<suma<<endl;

    return 0;
}