#include <iostream>
#include "Validaciones.h"
#include <string>
using namespace std;

bool Validaciones:: ValidarSoloLetras(string cadena) {
    for (char letra : cadena) {
        if (!isalpha(letra)) return false;
    }
    return true;
}
char Validaciones::ValidarOpcion(char op) {
	while (op != 'a' && op!= 'b') {
		cout << "\nINGRESE SOLO (a) Ó (b): ";
		cin >> op;
	}
	return op;
}
char Validaciones::ValidarOpcion5(char op) {
	while (op != 'a' && op != 'b'&& op!='c' && op != 'd' && op != 'e') {
		cout << "\nINGRESE OPCION DESDE (a - e): ";
		cin >> op;
	}
	return op;
}
char Validaciones::ValidarOpcion3(char op) {
	while (op != 'a' && op != 'b' && op != 'c') {
		cout << "\nINGRESE OPCION DESDE (a - c): ";
		cin >> op;
	}
	return op;
}
bool Validaciones:: esNumero(string cadena) {
	for (int i = 0; i < cadena.length(); i++) {
		if (!isdigit(cadena[i])) {
			return false;
		}
	}
	return true;
}

int Validaciones::ValidarNumeroTickets(string cadena) {
	while (!esNumero(cadena))
	{
		cout << "Ingresar solo numeros" << endl;
	}
	return stoi(cadena);
}