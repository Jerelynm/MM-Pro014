//BUCLE WHILE
//Programa que imprime los primeros 10 numeros naturales con su cuadrado

#include <iostream>
using namespace std;

int main() {
    int i = 1; // Comenzamos desde el primer número natural

    cout << "Los primeros 10 numeros naturales y sus cuadrados son:" << endl;


    while (i <= 10) {
        cout << "Numero: " << i << ", Cuadrado: " << (i * i) << endl;
        i++; // Incrementamos el número natural
    }

    return 0;
}

