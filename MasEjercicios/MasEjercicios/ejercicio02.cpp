#include <iostream>
#include <math.h>
using namespace std;
void NumerosComplejos(int& real1, int& real2, int& imagina1, int& imagina2) {
	cout << "ingrese la parte real del primero numero" << endl;
	cin >> real1;
	cout << "ingrese la parte imaginaria del primer numero" << endl;
	cin >> imagina1;
	cout << "ingrese la parte real del segundo numero" << endl;
	cin >> real2;
	cout << "ingrese la parte imaginaria del segundo numero" << endl;
	cin >> imagina2;
}
void Suma(int& real1, int& real2, int& imagina1, int& imagina2) {
	int suma = real1 + real2;
	int imaginario = imagina1 + imagina2;
	cout << "(" << real1 << " + " << imagina1 << "i) + (" << real2 << " + " << imagina2 << "i ) = (" << suma << " + " << imaginario << "i )" << endl;
}
void Resta(int& real1, int& real2, int& imagina1, int& imagina2) {
	int resta = real1 - real2;
	int imaginario = imagina1 - imagina2;
	cout << "(" << real1 << " + " << imagina1 << "i) - (" << real2 << " + " << imagina2 << "i ) = (" << resta << " + " << imaginario << "i )" << endl;
}
void main() {
	char* opcion = new char;
	cout << "\tMenu de opciones" << endl;
	cout << "A. Sumar 2 Numeros Complejos" << endl;
	cout << "B. Restar 2 Numeros Complejos" << endl;
	cout << "X. Salir del Programa" << endl;
	cin >> *opcion;
	int real1, real2, imagina1, imagina2;
	switch (*opcion) {
	case 'A':
		NumerosComplejos(real1, real2, imagina1, imagina2);
		Suma(real1, real2, imagina1, imagina2);
		break;
	case 'B':
		NumerosComplejos(real1, real2, imagina1, imagina2);
		break;
	case 'X':
		break;
	default:
		cout << "opcion invalida" << endl;
		break;
	}
}