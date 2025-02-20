#include <iostream>
using namespace std;

int main() {
    double number;

    cout <<"Ingresa un numero: "<<endl;
    cin >> number;

    //Se identifica si el numero es positivo, negativo o en caso sea 0

    if (number > 0) {
        cout <<"El numero ingresado es positivo"<<endl;
    } else if (number < 0) {
        cout <<"El numero ingresado es negativo"<<endl;
    }
    else{
        cout<<"El numero ingresado es 0"<<endl;
    }

    return 0;
}
// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.