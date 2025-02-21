// Programa que solicita ingresar el precio de un articulo y el descuento aplicable para mostar el precio con el descuento

#include <iostream>
using namespace std;

int main() {
    double precio0, PrecioDesc, PrecioFin;

    cout<<"Determine el precio con el descuento"<<endl;
    cout<<"Ingrese el precio: "<<endl;
    cin>>precio0;

    cout<<"Ingrese el descuento: "<<endl;
    cin>>PrecioDesc;

    if (precio0 < 0 or PrecioDesc < 0) {
        cout <<"No pueden ser numeros negativos"<<endl;
    } else if (PrecioDesc > 100) {
        cout <<"El descuento no puede ser mayor a 100%"<<endl;
    } else if (PrecioDesc == 0) {
        cout <<"No hay descuento "<<precio0<<" es el precio"<<endl;
    } else {
        PrecioFin = precio0-(precio0*(PrecioDesc/100));
        cout<<"El precio con descuento es:Q "<<PrecioFin<<endl;
    }
    return 0;
}