//Programa que determina si un numero es multiplo de 5 y de 7

#include <iostream>
using namespace std;

int main() {
    int j;

    cout<<"Por favor ingrese un numero: "<<endl;
    cin>>j;

    if (j % 5 == 0 && j % 7 == 0) {
        cout << "Es multiplo de 5 y 7"<<endl;
    } else if (j % 5 == 0) {
        cout << "Es multiplo de 5"<<endl;
    } else if (j % 7 == 0) {
        cout << "Es multiplo de 7"<<endl;
    }else {
        cout << "No es multiplo de 5 ni de 7"<<endl;
    }
    return 0;
}