#include <iostream>

using namespace std;

#include <cmath>

#ifndef LN_1_FUNCIONES_H
#define LN_1_FUNCIONES_H
#endif

//Inicializar variables globales
double fact;
float n1, n2;
int answer_1, answer_2, producto, fib_a, fib_b, fib_final, n3;

//Funciones Generales
void suma();
void resta();
void multiplicacion();
void igualdad();
void desigualdad();
void absoluto();
void modulo();
void mayor_menor();
void division();
void potencia();
int fibonacci();
int factorial();

//Máximo y mínimo
void minimo();
int maximo();

//Ingreso Datos
int ingreso_entero();
float ingreso_flotante();
float ingreso_flotantes();
void menu_opciones();
float validacion_division();
float validacion_maximo();
float validacion_positivo();

//Devolución un valor
float ingreso_flotante() {
    cout << "Ingrese un numero : " << endl;
    cin >> n1;
    return n1;
}

int ingreso_entero() {
    cout << "Ingrese un numero : " << endl;
    cin >> n3;
    return n3;
}

float validacion_division(){
    n1,n2 = ingreso_flotantes();
    while (n2==0){
        cout << "Indeterminada vuelva a ingresar los valores: " << endl;
        n1,n2=ingreso_flotantes();
    }
    return n1,n2;
}

float validacion_maximo(){
    n1,n2 = ingreso_flotantes();
    while (n2==0 or n1==0){
        cout << "Indeterminada vuelva a ingresar los valores: " << endl;
        n1,n2=ingreso_flotantes();
    }
    return n1,n2;
}

float validacion_positivo(){
    n3= ingreso_entero();
    while (n3<0){
        cout << "Indeterminada vuelva a ingresar: " << endl;
        n3=ingreso_entero();
    }
    return n3;
}

//Devolución dos valores
float ingreso_flotantes() {
    cout << "Ingrese un numero : " << endl;
    cin >> n1;
    cout << "Ingrese un segundo numero : " << endl;
    cin >> n2;
    return n1, n2;
}

//Funciones_dos_valores
void mayor_menor() {
    n1, n2 = ingreso_flotantes();
    if (n1 == n2) {
        cout << "Los numeros son iguales" << endl;
    }
    if (n1 > n2) {
        cout << "El numero " << n1 << " es mayor a " << n2 << " por " << n1 - n2 << endl;
    } else {
        cout << "El numero " << n2 << " es mayor a " << n1 << " por " << n2 - n1 << endl;
    }
}

void suma() {
    n1, n2 = ingreso_flotantes();
    cout << "El resultado de la suma de " << n1 << " y " << n2 << " es " << n1 + n2 << "." << endl;
}

void resta() {
    n1, n2 = ingreso_flotantes();
    cout << "El resultado de la resta entre " << n1 << " y " << n2 << " es " << n1 - n2 << "." << endl;
}

void multiplicacion() {
    n1, n2 = ingreso_flotantes();
    cout << "El producto de la multiplicacion entre " << n1 << " y " << n2 << " es " << n1 * n2 << "." << endl;
}

void igualdad() {
    n1, n2 = ingreso_flotantes();
    if (n1 == n2) {
        cout << "Existe igualdad entre " << n1 << " y " << n2 << "." << endl;
    } else {
        cout << "No existe igualdad entre " << n1 << " y " << n2 << "." << endl;
    }
}

void desigualdad() {
    n1, n2 = ingreso_flotantes();
    if (n1 != n2) {
        cout << "Existe desigualdad entre " << n1 << " y " << n2 << "." << endl;
    } else {
        cout << "No existe desigualdad entre " << n1 << " y " << n2 << "." << endl;
    }
}

void division() {
    n1, n2 = validacion_division();
    cout << "El resultado de la division entre " << n1 << " y " << n2 << " es " << n1 / n2 << endl;
}

void modulo() {
    n1, n2 = validacion_division();
    n3= fmod(n1,n2);
    cout << "El modulo o cociente de la division entre " << n1 << " y " << n2 << " es " << n3 << endl;
}

void potencia() {
    n1, n2 = ingreso_flotantes();
    cout << "El numero " << n1 << " elevado a " << n2 << " es " << pow(n1, n2) << endl;
}

int maximo() {
    n1, n2 = validacion_maximo();
    producto = n1 * n2;
    while (n2 != 0) {
        int temp = n2;
        n2 = fmod(n1, n2);
        n1 = temp;
    }
    cout << "El maximo comun divisor de los numeros es " << n1 << endl;
    return producto, n1;
}

void minimo() {
    producto, n1 = maximo();
    cout << "Por lo que el minimo comun multiplo es " << producto / n1 << endl;
}


//Funciones_un_valor
void absoluto() {
    n1 = ingreso_flotante();
    if (n1 <= 0) {
        cout << "El valor absoluto de " << n1 << " es " << -(n1) << endl;
    } else {
        cout << "El valor absoluto de " << n1 << " es " << n1 << "." << endl;
    }
}

int fibonacci() {
    n3 = validacion_positivo();
    fib_a = 0;
    fib_b = 1;
    if (n3 == 0) {
        cout << "El numero de la sucesion de Fibonacci correspondiente es " << fib_a << endl;
        return 0;
    }
    if (n3 == 1) {
        cout << "El numero de la sucesion de Fibonacci correspondiente es " << fib_b << endl;
        return 0;
    }

    for (int x = 2; x <= n3; x = x + 1) {
        int temp = fib_a + fib_b;
        fib_a = fib_b;
        fib_b = temp;
    }
    cout << "El numero de la sucesion de Fibonacci correspondiente es " << fib_b << endl;
    return 0;
}

int factorial() {
    n3 = validacion_positivo();
    fact = 1;

    if (n3 == 0) {
        cout << "El factorial de " << n3 << " es 1" << endl;
        return 0;
    }

    for (int x = 1; x <= n3; x = x + 1) {
        fact = fact * x;
    }
    cout << "El factorial de " << n3 << " es " << fact << endl;
    return 0;
}


//Validación del 0 al n
int validacion(int n) {
    cin >> answer_2;
    while (answer_2 <= -1 or answer_2 > n) {
        cout << "Invalido: " << endl;
        cin >> answer_2;
    };
    return answer_2;
};

//Menu
void menu_opciones() {
    cout << "1 ---> Suma" << endl;
    cout << "2 ---> Resta" << endl;
    cout << "3 ---> Multiplicacion" << endl;
    cout << "4 ---> Division" << endl;
    cout << "5 ---> Modulo" << endl;
    cout << "6 ---> Igualdad" << endl;
    cout << "7 ---> Desigualdad" << endl;
    cout << "8 ---> Serie de Fibonacci" << endl;
    cout << "9 ---> Factorial" << endl;
    cout << "10 --> MCM" << endl;
    cout << "11 --> MCD" << endl;
    cout << "12 --> Valor Absoluto" << endl;
    cout << "13 --> Potencia" << endl;
    cout << "0 ---> Terminar el Programa" << endl;
}

//Consulta
int respuesta() {
    cout << "Ver el menu de opciones? :" << endl;
    cout << "0 --> SIS" << endl;
    cout << "1 --> NON" << endl;
    cout << "Digite su eleccion: ";
    answer_2 = validacion(1);
    if (answer_2 == 0) {
        menu_opciones();
    } else {}
    cout << "Digite su respuesta: ";
    answer_1 = validacion(13);
    return answer_1;
};


