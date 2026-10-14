#include <iostream>
using namespace std;

int main() {
    int inicio;

    cout << "Ingrese el numero para iniciar la cuenta regresiva: ";
    if (!(cin >> inicio)) {
        cerr << "Entrada invalida. Ingrese un numero entero.\n";
        return 1;
    }
    if (inicio < 0) {
        cerr << "El numero debe ser mayor o igual a cero.\n";
        return 1;
    }
    for (int numero = inicio; numero >= 0; --numero) {
        cout << numero << '\n';
    }

    return 0;
}