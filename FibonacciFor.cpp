//BUCLE FOR
//Programa que imprime los primeros 10 terminos de la serie Fibonacci

#include <iostream>
using namespace std;

int main() {
    int n2 = 10; // Número de términos de la serie Fibonacci a imprimir
    int d = 0;  // Primer término
    int e = 1;  // Segundo término

    cout << "Los primeros " << n2 << " terminos de la serie Fibonacci son:" << endl;

    // Bucle for para calcular e imprimir los términos de la serie Fibonacci
    for (int i = 0; i < n2; i++) {
        cout << d << " "; // Imprimir el término actual
        int siguiente = d + e; // Calcular el siguiente término
        d = e; // Actualizar a para el siguiente término
        e = siguiente; // Actualizar b para el siguiente término
    }

    cout << endl; // Salto de línea al final
    return 0;
}
