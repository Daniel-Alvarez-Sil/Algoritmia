#include <bits/stdc++.h> // <-- IMPORTANTE: Librería para programación competitiva
using namespace std;

// 5. Función
void saludar(string nombre) {
    cout << "Un gusto verte, " << nombre << endl;
}

int main() {
    // 1. Variables
    int edad = 1;
    string nombre = "Algoritmia";

    // 2. Condiciones
    if (edad >= 18) {
        cout << "Eres mayor de edad" << endl;
    } else {
        cout << "Eres menor de edad" << endl;
    }

    // 3. Sentencias de control (ciclos)
    cout << "\nCiclo for:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Iteración " << i << endl;
    }

    cout << "\nCiclo while:" << endl;
    int contador = 0;
    while (contador < 3) {
        cout << "Contador: " << contador << endl;
        contador++;
    }

    // 4. Lectura y salida de datos
    string nombre_usuario;
    cout << "\nIngresa tu nombre: ";
    cin >> nombre_usuario;
    cout << "Hola, " << nombre_usuario << endl;

    // 5. Llamada a la función
    saludar(nombre_usuario);

    return 0;
}
