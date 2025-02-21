//BUCLE FOR
//Programa que solicite al usuario un numero y muestre la tabla de multiplicar del 1 al 10
#include <iostream>
using namespace std;

int main() {
    int numero;

    // Solicitar al usuario que ingrese un número
    cout << "Ingresa un numero: ";
    cin >> numero;

    cout << "Tabla de multiplicar de " << numero << ":" << endl;

    // Bucle for para imprimir la tabla de multiplicar del número
    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << numero * i << endl; // Imprimir el resultado de la multiplicación
    }

    return 0;
}
