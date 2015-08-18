# ESPAI-Hoja14

Ejercicios capítulo 14

1. ¿Qué ventajas nos aporta la sobrecarga de funciones?

2. En los parámetros de una función, ¿cómo funcionan los valores por defecto?

3. Explica porqué es preferible usar la sobrecarga que los valores por defecto.

4. Dado el siguiente código:
#include <iostream>
using namespace std;
class Calculadora
{
public:
Calculadora(int);
void doblaNumero();
int getNumero();
private:
int *numero;
};
Calculadora::Calculadora(int num)
{
numero = new int;
*numero = num;
}
void Calculadora::doblaNumero()
{
*numero = *numero * 2;
}
int Calculadora::getNumero()
{
return *numero;
}
int main()
{
Calculadora calc1(15);
calc1.doblaNumero();
cout << "1: " << calc1.getNumero() << endl;
Calculadora calc2(calc1);
calc2.doblaNumero();
cout << "2: " << calc2.getNumero() << endl;
cout << "3: " << calc1.getNumero() << endl;
return 0;
}

Y el resultado:
1: 30
2: 60
3: 60
¿Cuál dirías que es el error? Explica también cómo lo corregirías.

5. Práctica final del capítulo
Completa la clase Calculadora que hemos usado en el ejercicio anterior. Debe permitirnos las
siguientes operaciones:
a.Mostrar resultado actual
b.Sumar 1 numero
c.Sumar 2 numeros
d.Restar 1 numero
e.Restar 2 numeros
f.Multiplicar por 1 numero
g.Multiplicar por 2 numeros
h.Dividir por 1 numero
i.Dividir por 2 numeros

Utiliza la sobrecarga de funciones.
Como ejemplo de funcionamiento, al inicio usar a.resultado actual nos dará 0. Si usamos la
b.sumar 1 numero y introducimos 7, al usar de nuevo la opcion a aparecerá 7, el resultado de
(0+7). Si usamos entonces g.Multiplicar por 2 numeros e introducimos 2, 1, cuando volvamos a
usar a tendremos como resultado 14 (7*2*1).
La función main() debe estar en un fichero distinto de la clase Calculadora.
Para terminar, asegúrate que el constructor de copia funciona correctamente.
