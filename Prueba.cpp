#include <iostream>

using namespace std;

double obtenerNumero() {
    double numero;
    cout << "Ingrese un número: ";
    cin >> numero;
    return numero;
}

char obtenerOperador() {
    char operador;
    cout << "Ingrese un operador (+, -, *, /): ";
    cin >> operador;
    return operador;
}

int main() {
    char operador;
    double numero1, numero2;

    cout << "Calculadora Simple" << endl;
    cout << "------------------" << endl;

    operador = obtenerOperador();
    numero1 = obtenerNumero();
    numero2 = obtenerNumero();

    switch (operador) {
    case '+':
        cout << "Resultado: " << numero1 + numero2 << endl;
        break;
    case '-':
        cout << "Resultado: " << numero1 - numero2 << endl;
        break;
    case '*':
        cout << "Resultado: " << numero1 * numero2 << endl;
        break;
    case '/':
        if (numero2 != 0) {
            cout << "Resultado: " << numero1 / numero2 << endl;
        }
        else {
            cout << "Error: División por cero no permitida." << endl;
        }
        break;
    default:
        cout << "Operador no válido. Por favor, ingrese un operador válido." << endl;
        break;
    }

    return 0;
}
