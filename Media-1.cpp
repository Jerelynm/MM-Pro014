//BUCLE WHILE
//Programa que calcula la media y para salir debe ingresar un numero negativo
#include <iostream>
using namespace std;

int main() {
    double jm;
    double suma = 0.0;
    int contador = 0;

    cout << "Ingresa una serie de numeros: " << endl;

    while (true) {
        cin >> jm;

        // Usamos if-else para controlar el flujo
        if (jm >= 0) {
            suma += jm; // Sumar el número a la suma total
            contador++;     // Incrementar el contador de números válidos
        } else {
            break; // Salir del bucle si el número es negativo
        }
    }

    // Calculamos la media si se han ingresado números
    double media = (contador > 0) ? suma / contador : 0;

    cout << "La media de los numeros ingresados es: " << media << endl;

    return 0;
}
