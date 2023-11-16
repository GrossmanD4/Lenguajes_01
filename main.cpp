#include <iostream>

using namespace std;

#include "Funciones.h"

int main() {
    while (true) {
        int eleccion = respuesta();
        if (eleccion == 0) {
            break;
        }
        switch (eleccion) {
            case 1:
                suma();
                break;
            case 2:
                resta();
                break;
            case 3:
                multiplicacion();
                break;
            case 4:
                division();
                break;
            case 5:
                modulo();
                break;
            case 6:
                igualdad();
                break;
            case 7:
                desigualdad();
                break;
            case 8:
                fibonacci();
                break;
            case 9:
                factorial();
                break;
            case 10:
                minimo();
                break;
            case 11:
                maximo();
                break;
            case 12:
                absoluto();
                break;
            case 13:
                potencia();
                break;
        }
    }
}
