//============================================================================
// Name        : capitulo14ejercicio5.cpp
// Author      : Raquel Gomez
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Calculadora.h"
using namespace std;

char opt;
int i, j;
Calculadora calc1(0);

int main() {

	while (true) {
		cout
				<< "Que quiere hacer? \n a) Mostrar el resultado actual \n b) Sumar un numero \n c) Sumar dos numeros  \n d) Restar un numero \n e) Restar dos numeros \n";
		cout
				<< " f) Multiplicar por un numero \n g) Multiplicar por dos numeros \n h) Dividir por un numero \n i) Dividir entre dos numeros \ otro) Salir "
				<< endl;
		cin >> opt;

		switch (opt) {
		case 'a':
			cout << "El resultado actual es: " << calc1.getNumero() << endl;
			break;

		case 'b':
			cout << "Cuanto quiere sumar? " << endl;
			cin >> i;
			cout << "La suma es " << calc1.suma(i) << endl;
			break;

		case 'c':
			cout
					<< "Intorduzca los dos numeros que quiere sumar, separados por espacios "
					<< endl;
			cin >> i >> j;
			cout << "La suma es: " << calc1.suma(i, j) << endl;
			break;

		case 'd':
			cout << "Cuanto quiere restar? " << endl;
			cin >> i;
			cout << "La resta es " << calc1.suma(-i) << endl;
			break;

		case 'e':
			cout
					<< "Intorduzca los dos numeros que quiere restar, separados por espacios "
					<< endl;
			cin >> i >> j;
			cout << "La resta es: " << calc1.suma(-i, -j) << endl;
			break;

		case 'f':
			cout << "Intorduzca el numero que quiere multiplicar "<< endl;
			cin >> i;
			cout << "El producto es: " << calc1.multiplicacion(i) << endl;
			break;


		case 'g':
			cout << "Intorduzca lo numeros que quiere multiplicar, separados por espacios "<< endl;
			cin >> i >> j ;
			cout << "El producto es: " << calc1.multiplicacion(i,j) << endl;
			break;

		case 'h':
			cout << "Intorduzca el numero por el que vamos a dividir "<< endl;
			cin >> i;
			cout << "La division es: " << calc1.division(i) << endl;
			break;


		case 'i':
			cout << "Intorduzca lo numeros que quiere multiplicar, separados por espacios "<< endl;
			cin >> i >> j ;
			cout << "La division es: " << calc1.division(i,j) << endl;
			break;

		default:
			return 0;
		}

	}



	return 0;
}
