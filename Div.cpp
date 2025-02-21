//BUCLE FOR
//Programa que pida ingresar un numero y luego imprima todos sus divisores

#include <iostream>
using namespace std;

int main() {
    int aj;

    // Solicitar al usuario que ingrese un número entero
    cout << "Ingresa un numero entero positivo: ";
    cin >> aj;

    // Verificar que el número ingresado sea positivo
    if (aj <= 0) {
        cout << "Por favor, ingresa un numero entero positivo." << endl;
        return 1; // Salir del programa si el número no es positivo
    }

    cout << "Los divisores de " << aj << " son:" << endl;

    // Bucle for para encontrar e imprimir los divisores del número
    for (int i = 1; i <= aj; i++) {
        if (aj % i == 0) { // Verificar si i es un divisor de numero
            cout << i << " "; // Imprimir el divisor
        }
    }

    cout << endl; // Salto de línea al final
    return 0;
}

