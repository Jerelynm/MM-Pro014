//BUCLE FOR
//Programa que calcula el factorial de un numero ingresado

#include <iostream>
using namespace std;

int main() {
    int n1;
    long long factorial = 1; // Usamos long long para manejar números grandes

    // Solicitar al usuario que ingrese un número entero no negativo
    cout << "Ingresa un numero entero no negativo: ";
    cin >> n1;

    // Verificar que el número ingresado sea no negativo
    if (n1 < 0) {
        cout << "El factorial no esta definido para numeros negativos." << endl;
        return 1; // Salir del programa si el número es negativo
    }

    // Bucle for para calcular el factorial
    for (int i = 1; i <= n1; i++) {
        factorial *= i; // Multiplicar el factorial por el número actual
    }

    // Mostrar el resultado
    cout << "El factorial de " << n1 << " es: " << factorial << endl;

    return 0;
}
