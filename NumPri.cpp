//Programa que verifica si el numero es primo o no

#include <iostream>

using namespace std;

int main() {
    int cm;

    cout << "Ingrese el numero que desea: "<<endl;
    cin >> cm;

    if (cm % 2 == 0) {
        cout << "El numero " <<cm<< " no es primo"<<endl;
    } else {
        cout << "El numero " <<cm<< " es primo"<<endl;
    }
    return 0;
}

