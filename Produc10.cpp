//BUCLE WHILE
//Programa que calcula el producto de los primeros 10 numeros naturales

#include <iostream>
using namespace std;

int main() {
    int i = 1; // Comenzamos desde el primer número natural
    int producto = 1; // Inicializamos el producto en 1


    while (i <= 10) {
        producto *= i; // Multiplicamos el producto por el número actual
        i++; // Incrementamos el número natural
    }

    cout << "El producto de los primeros 10 numeros naturales es: " << producto << endl;

    return 0;
}

