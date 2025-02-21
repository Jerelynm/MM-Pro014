//BUCLE FOR
//Programa que solicita al usuario un numero positivo y luego calcular la suma de todos los numeros pares

#include <iostream>
using namespace std;

int main() {
    int x;
    int suma = 0; // Variable para almacenar la suma de los números pares

    // Solicitar al usuario que ingrese un número entero positivo
    cout << "Ingresa un numero entero positivo: ";
    cin >> x;

    // Verificar que el número ingresado sea positivo
    if (x <= 0) {
        cout << "Por favor, ingresa un numero entero positivo." << endl;
        return 1; // Salir del programa si el número no es positivo
    }

    // Bucle for para calcular la suma de los números pares desde 1 hasta n
    for (int i = 2; i <= x; i += 2) {
        suma += i; // Sumar el número par actual
    }

    // Mostrar el resultado
    cout << "La suma de los numeros pares desde 1 hasta " << x << " es: " << suma << endl;

    return 0;
}
