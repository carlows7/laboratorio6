#include <iostream>
using namespace std;

int main() {
    int limite;
    cout << "Ingrese el numero limite: ";
    if (!(cin >> limite)) {
        cerr << "Entrada invalida. Ingrese un numero entero.\n";
        return 1;
    }
    for (int i = 1; i <= limite / 5; i++) {
        cout << i * 5 << '\n';
    }

    return 0;
}