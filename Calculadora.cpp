/*
 * Calculadora.cpp
 *
 *  Created on: Aug 18, 2015
 *      Author: raquel
 */

#include <iostream>
#include "Calculadora.h"
using namespace std;



Calculadora::Calculadora(int num){
	numero = new int;
	*numero=num;
}

Calculadora::Calculadora(Calculadora &calc){
	numero= new int;
	*numero = calc.getNumero();
}

void Calculadora::doblaNumero(){
	*numero = *numero*2;
}

int Calculadora::getNumero(){
	return *numero;
}

int Calculadora::suma(int a){
	*numero = *numero+a;

	return *numero;
}

int Calculadora::suma(int a,int b){
	*numero= *numero + a + b;
	return *numero;
}

int Calculadora::multiplicacion(int a){
	*numero = *numero*a;

	return *numero;
}

int Calculadora::multiplicacion(int a,int b){
	*numero = *numero*a*b;

	return *numero;
}

int Calculadora::division(int a) {
*numero = *numero/a;
	return *numero;
}

int Calculadora::division(int a, int b) {
*numero = *numero/(a*b);
return *numero;
}
