//BUCLE WHILE
//Programa para ingresar numeros positivos y sumarlos cuando ingresa un numero negativo se detiene

#include <iostream>
using namespace std;

int main () {
    int bl, suma=0;
    cout<<"Ingrese un numero: "<<endl;
    cin>>bl;

    while (bl>=0) {
        suma+=bl;

        cout<<"Ingrese otro numero positivo: "<<endl;
        cin>>bl;
    }
    cout<<"La suma de los numeros positivos es: "<<suma<<endl;
    cout<<"Se ha detectado un numero negativo";

    return 0;
}