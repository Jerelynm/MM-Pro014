//BUCLE FOR
//Programa que imprima la serie de numeros primos del 1 al 50

#include <iostream>
using namespace std;

int main() {
    cout << "Los numeros primos del 1 al 50 son:" << endl;

    // Bucle para imprimir los números primos del 1 al 50
    for (int num = 2; num <= 50; num++) { // Comenzamos desde 2, ya que 1 no es primo
        bool esPrimo = true; // Suponemos que el número es primo

        // Verificamos si num es primo
        for (int i = 2; i * i <= num; i++) { // Solo necesitamos verificar hasta la raíz cuadrada de num
            if (num % i == 0) {
                esPrimo = false; // Si es divisible, no es primo
                break; // Salimos del bucle
            }
        }

        // Si es primo, lo imprimimos
        if (esPrimo) {
            cout << num << " ";
        }
    }

    cout << endl; // Salto de línea al final
    return 0;
}

