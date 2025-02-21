//BUCLE WHILE
//Programa hasta que el numero ingresado sea igual a 0

#include <iostream>
using namespace std;

int main() {
    int Y;

    cout << "Ingresa numeros (ingresa 0 para terminar):" << endl;
    cin >> Y; // Leer el primer número antes del bucle

    while (Y != 0) {
        cout << "Ingresa otro numero: " << endl;

        // Leer el siguiente número
        cin >> Y;
    }

    return 0;
}

