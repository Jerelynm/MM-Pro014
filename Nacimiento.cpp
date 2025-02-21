//Programa que determina si un año ingresado es año de nacimiento valido mayor a 1900 y menor que 2025

#include <iostream>
using namespace std;

int main() {
    int N;

    cout <<"Verifique si es un año valido"<<endl;
    cout << "Ingrese el año: "<<endl;
    cin >> N;

    if (N >= 1901 && N <= 2024) {
        cout <<N<<" es un año de nacimiento valido"<<endl;
    } else {
        cout <<N<<" no es un año de nacimiento valido"<<endl;
    }
    return 0;
}