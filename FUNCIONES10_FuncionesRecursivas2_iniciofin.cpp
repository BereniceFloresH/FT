#include <iostream>

using namespace std;

void imprimirRango(int inicio, int fin) {
    if (inicio <= fin) {
        cout << inicio << " ";
        imprimirRango(inicio + 1, fin);
    }
}

int main() {
    int inicio, fin;

    cout << "Ingrese el inicio del rango: ";
    cin >> inicio;

    cout << "Ingrese el fin del rango: ";
    cin >> fin;

    cout << "Números en el rango [" << inicio << ", " << fin << "]: ";
    imprimirRango(inicio, fin);

    return 0;
}
