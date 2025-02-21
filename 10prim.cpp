//BUCLE FOR
//Programa que imprima los primeros 10 numeros primos

#include <iostream>
using namespace std;

int main() {
    int count = 0; // Contador de números primos encontrados
    int num = 2;   // Primer número a verificar

    cout << "Los primeros 10 numeros primos son:" << endl;

    // Bucle for para encontrar los primeros 10 números primos
    for (count = 0; count < 10; num++) {
        bool esPrimo = true; // Suponemos que el número es primo

        // Verificar si num es primo
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                esPrimo = false; // No es primo si es divisible
                break; // Salir del bucle si encontramos un divisor
            }
        }

        // Si es primo, imprimirlo y aumentar el contador
        if (esPrimo) {
            cout << num << " ";
            count++; // Aumentar el contador de números primos encontrados
        }
    }

    cout << endl; // Salto de línea al final
    return 0;
}
