#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int numeroOriginal, ultimoDigito; // Variables para el número original y su último dígito
    double digitos; // Cantidad de dígitos que tiene el número
    double suma = 0; // Variable que sumará los dígitos elevados a su cantidad de dígitos
    int numero; // Número a determinar si es un número de Armstrong

    cout << "Ingrese un numero: ";
    cin >> numero;

    numeroOriginal = numero; // Copia el valor del número para su procesamiento
    digitos = floor(log10(numero)) + 1; // Calcula el total de dígitos del número
    // Calcula la suma de potencia de digitos
    while (numero > 0) {
        ultimoDigito = numero % 10; // Extrae el último dígito
        // Calcula la suma de potencias del último dígito
        suma = suma + pow(ultimoDigito, digitos);
        numero = numero / 10; // Elimina el último dígito
    }
    // Verifica si es un número de Armstrong si la suma obtenida es igual al número
    if (numeroOriginal == suma) {
        cout << numeroOriginal << " es un número de Armstrong" << endl;
    } else {
        cout << numeroOriginal << " no es un número de Armstrong" << endl;
    }
    return 0;
}

