//BUCLE WHILE
//Programa que calcula la media de los numeros
#include <iostream>
using namespace std;

int main() {
    double gm;
    double suma = 0.0;
    int contador = 0;

    cout << "Ingresa 10 numeros:" << endl;

    // Bucle while para ingresar exactamente 10 números
    while (contador < 10) {
        cin >> gm;

        // Sumar el número a la suma total y aumentar el contador
        suma += gm; // Siempre sumamos el número
        contador++;     // Incrementamos el contador
    }

    // Calculamos la media
    double media = suma / contador;

    cout << "La media de los numeros ingresados es: " << media << endl;

    return 0;
}
