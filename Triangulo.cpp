//BUCLE FOR
//Programa que imprima la serie: 1 3 6 10 15 ..., n

#include <iostream>
using namespace std;

int main() {
    int z;

    // Solicitar al usuario que ingrese un número entero positivo
    cout << "Ingresa un número entero positivo: ";
    cin >> z;

    // Inicializar la variable para la suma de los números triangulares
    int suma = 0;

    cout << "La serie de números triangulares hasta " << z << " es:" << endl;

    // Bucle for para calcular e imprimir la serie de números triangulares
    for (int i = 1; suma <= z; i++) {
        suma += i; // Sumar el número actual
        // Imprimir el número triangular actual solo si es menor o igual a n
        cout << suma * (suma <= z) << " "; // Multiplicamos por 1 si suma es menor o igual a n, de lo contrario por 0
    }

    cout << endl; // Salto de línea al final
    return 0;
}
