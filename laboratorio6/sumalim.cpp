#include <iostream>
using namespace std;

int main() {
    int limite;

    cout << "Ingrese el numero limite: ";
    if (!(cin >> limite)) {
        cerr << "Entrada invalida. Ingrese un numero entero.\n";
        return 1;
    }
    if (limite > 100000) {
        cerr << "El limite maximo es 100000 (si no, la suma no cabe en int).\n";
        return 1;
    }

    int suma = 0;
    int cantidad = 0;

    for (int numero = 1; numero <= limite; numero += 2) {
        suma += numero;
        ++cantidad;
    }

    cout << "Numeros impares: " << cantidad << '\n';
    cout << "Suma de los numeros impares: " << suma << '\n';

    return 0;
}