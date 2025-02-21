//BUCLE FOR
//Programa que imprima los numeros pares del 2 al 20

#include <iostream>
using namespace std;

int main() {
    cout << "Los numeros pares del 2 al 20 son:" << endl;


    for (int i = 2; i <= 20; i += 2) {
        cout << i << endl; // Imprimir el número par actual
    }

    return 0;
}

