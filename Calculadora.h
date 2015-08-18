/*
 * Calculadora.h
 *
 *  Created on: Aug 18, 2015
 *      Author: raquel
 */


#include <iostream>
using namespace std;


class Calculadora{
public:
	Calculadora(int);
	Calculadora(Calculadora&);
	void doblaNumero();
	int getNumero();
	int suma(int);
	int suma(int, int);
	int multiplicacion(int);
	int multiplicacion(int, int);
	int division(int);
	int division(int, int);

private:
	int *numero;
};


