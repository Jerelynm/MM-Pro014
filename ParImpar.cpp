#include <iostream>
using namespace std;

int main() {
    //Variables
    int n;

    cout << "Ingrese un numero: "<<endl;
    cin>>n;

    if (n % 2 == 0) {
        cout << "El numero " << n <<" es par"<<endl;
    } else {
        cout << "El numero " << n <<" es impar"<<endl;
    }
    return 0;
}