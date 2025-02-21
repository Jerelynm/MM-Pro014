//BUCLE FOR
//Programa que calcule la suma de los primeros 100 numeros naturales


#include <iostream>
using namespace std;

int main() {
    int suma = 0;

    // Bucle for para sumar los primeros 100 números naturales
    for (int i = 1; i <= 100; i++) {
        suma += i; // Sumar el número actual a la suma total
    }

    // Imprimir el resultado
    cout << "La suma de los primeros 100 numeros naturales es: " << suma << endl;

    return 0;
}
