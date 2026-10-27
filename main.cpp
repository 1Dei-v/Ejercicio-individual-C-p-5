#include <iostream>

using namespace std;

// 1. Suma de los primeros n números
void programaEj1() {
    cout << "\n=== Ejercicio 1: Suma de los primeros n numeros ===" << endl;
    int n;
    cout << "Ingrese el valor de n: ";
    cin >> n;

    if (n > 0) {
        int suma = 0;
        int i = 1;

        while (i <= n) {
            suma = suma + i;
            i = i + 1;
        }

        cout << "La suma es: " << suma << endl;
    } else {
        cout << "Error: El numero debe ser mayor que 0." << endl;
    }
}

// 2. Conteo de números positivos, negativos y ceros (10 elementos)
void programaEj5_3() {
    cout << "\n=== Ejercicio 5.3: Contador de Positivos, Negativos y Ceros ===" << endl;
    int positivos = 0;
    int negativos = 0;
    int ceros = 0;
    int i = 1;
    double num;

    while (i <= 10) {
        cout << "Ingrese el numero " << i << ": ";
        cin >> num;

        if (num > 0) {
            positivos = positivos + 1;
        } else if (num < 0) {
            negativos = negativos + 1;
        } else {
            ceros = ceros + 1;
        }

        i = i + 1;
    }

    cout << "\n--- Resultados ---" << endl;
    cout << "Cantidad de numeros positivos: " << positivos << endl;
    cout << "Cantidad de numeros negativos: " << negativos << endl;
    cout << "Cantidad de ceros: " << ceros << endl;
}

// 3. Multiplicación de potencias con límite
void programaEj5_5() {
    cout << "\n=== Ejercicio 5.5: Potencia con limite ===" << endl;
    double limite, base;

    cout << "Ingrese el valor limite: ";
    cin >> limite;
    cout << "Ingrese el valor de la base: ";
    cin >> base;

    double potencia = 1;

    while (potencia < limite) {
        potencia = base * potencia;
        cout << "Potencia: " << potencia << endl;
    }
}

// 4. Área y volumen de una esfera
void programaEj5_7() {
    cout << "\n=== Ejercicio 5.7: Area y Volumen de Esfera ===" << endl;
    double Radio, Area, Volumen;

    cout << "Ingrese el valor del radio: ";
    cin >> Radio;

    Area = 4 * 3.1416 * Radio * Radio;
    Volumen = (4.0 / 3.0) * 3.1416 * Radio * Radio * Radio;

    cout << "\n--- Resultados ---" << endl;
    cout << "Area: " << Area << endl;
    cout << "Volumen: " << Volumen << endl;
}

// 5. Inversión de las cifras de un número entero
void programaEj5_9() {
    cout << "\n=== Ejercicio 5.9: Invertir Numero ===" << endl;
    int num;

    cout << "Ingrese un numero entero positivo: ";
    cin >> num;

    int invertido = 0;

    while (num > 0) {
        int digito = num % 10;
        invertido = (invertido * 10) + digito;
        num = num / 10;
    }

    cout << "Numero invertido: " << invertido << endl;
}

// 6. Análisis de Mayor, Menor y Media de n números
void programaEj5_11() {
    cout << "\n=== Ejercicio 5.11: Mayor, Menor y Media ===" << endl;
    int n;

    cout << "Ingrese la cantidad de numeros (n): ";
    cin >> n;

    if (n > 0) {
        double num;

        cout << "Ingrese el primer numero: ";
        cin >> num;

        double Mayor = num;
        double Menor = num;
        double Suma = num;
        int i = 2;

        while (i <= n) {
            cout << "Ingrese el numero " << i << ": ";
            cin >> num;

            if (num > Mayor) {
                Mayor = num;
            }

            if (num < Menor) {
                Menor = num;
            }

            Suma = Suma + num;
            i = i + 1;
        }

        double media = Suma / n;

        cout << "\n--- Resultados ---" << endl;
        cout << "Mayor: " << Mayor << endl;
        cout << "Menor: " << Menor << endl;
        cout << "Media: " << media << endl;
    } else {
        cout << "La cantidad 'n' debe ser mayor que 0." << endl;
    }
}

// 7. Números de 3 dígitos con suma de cuadrados igual a su tercera parte
void programaEj5_13() {
    cout << "\n=== Ejercicio 5.13: Numeros especiales de 3 digitos ===" << endl;
    int n = 100;

    cout << "Numeros entre 100 y 999 que cumplen la condicion:" << endl;
    while (n <= 999) {
        int c = n / 100;
        int d = (n / 10) % 10;
        int u = n % 10;

        int Suma_sq = c * c + d * d + u * u;
        int Cociente = n / 3;

        if (Suma_sq == Cociente) {
            cout << n << endl;
        }

        n = n + 1;
    }
}

int main() {
    int opcion;

    do {
        cout << "\n==============================================" << endl;
        cout << "      SISTEMA DE DIAGRAMAS DE FLUJO EN C++    " << endl;
        cout << "==============================================" << endl;
        cout << "1. Ejercicio 1    - Suma acumulada de 1 a n" << endl;
        cout << "2. Ejercicio 5.3  - Positivos, negativos y ceros" << endl;
        cout << "3. Ejercicio 5.5  - Potencias menores a un limite" << endl;
        cout << "4. Ejercicio 5.7  - Area y volumen de esfera" << endl;
        cout << "5. Ejercicio 5.9  - Invertir un numero" << endl;
        cout << "6. Ejercicio 5.11 - Mayor, menor y media de n numeros" << endl;
        cout << "7. Ejercicio 5.13 - Numeros de 3 digitos con propiedad de cuadrados" << endl;
        cout << "0. Salir" << endl;
        cout << "==============================================" << endl;
        cout << "Seleccione el caso a ejecutar (0-7): ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                programaEj1();
                break;
            case 2:
                programaEj5_3();
                break;
            case 3:
                programaEj5_5();
                break;
            case 4:
                programaEj5_7();
                break;
            case 5:
                programaEj5_9();
                break;
            case 6:
                programaEj5_11();
                break;
            case 7:
                programaEj5_13();
                break;
            case 0:
                cout << "\nCerrando la aplicacion..." << endl;
                break;
            default:
                cout << "\nOpcion no valida. Seleccione un numero de caso entre 0 y 7." << endl;
                break;
        }

    } while (opcion != 0);

    return 0;
}