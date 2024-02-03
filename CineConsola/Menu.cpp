#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include "Menu.h"
#include "Validaciones.h"
using namespace std;
void Menu:: Saludo() {
	Validaciones _validar;
	char mensaje[50] = "CINE CODE TE DA LA BIENVENIDA ";
	string nombre;
	bool band=false;
	do {
		system("cls");
		Encabezado(4);
		cout << "                 BIEVENIDOS A NUESTRA PAGINA WEB" << endl;
		Encabezado(4);
		cout << "INGRESE SU NOMBRE [ingrese solo letras): ";
		getline(cin, nombre);
		band= _validar.ValidarSoloLetras(nombre);
	} while (!band);
	transform(nombre.begin(), nombre.end(), nombre.begin(), [](unsigned char c)
		{
		return toupper(c);
		});
	system("cls");
	Encabezado(4);
	cout << mensaje << " " << nombre;
	cout << "\n";
}
void Menu :: Encabezado(int numero_encabezado) {
	switch (numero_encabezado) {
	case 1:
		cout << "*****************************************************************\n"; break;
	case 2:
		cout << "ººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººººº\n"; break;
	case 3:
		cout << "°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n"; break;
	case 4:
		cout << "¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬¬\n"; break;
	case 5:
		cout << "=================================================================\n";
	}
}
void Menu:: Peliculas() {
	Encabezado(5);
	cout << "ELIJA EL TIPO DE PEL CULAS QUE DESEA VER\n (a - b)" << endl;
	cout << "a. DE ESTRENO \n" << endl;
	cout << "b. CLASICAS" << endl;
}
void Menu:: Estreno() {
	Encabezado(3);
	cout << "ESTAS SON LAS PEL CULAS DE ESTRENO:" << endl;
	cout << "***********************************" << endl;
	cout << "HOY~~~\n" << endl;
	cout << "a. Star Wars: Episodio IX    (6:00 - 7:30)  $24.70 |\n" << endl;
	cout << "b. IT :Capitulo II           (7:00 - 8:30)  $26.50 |\n" << endl;
	cout << "c. Zombie Land 2             (9:00 - 10:30) $21.80 |\n" << endl;
	cout << "d. Terminator: Destino oscuro(11:00 - 12:30)$22.99 |\n" << endl;
	cout << "e. Alma Maldita              (13:00 -14:30) $25.99 |" << endl;
}
void Menu:: Clasicos() {
	Encabezado(3);
	cout << "\nESTAS SON LAS PELICULAS CLASICAS" << endl;
	cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
	cout << "HOY~~~\n" << endl;
	cout << "a. El mago de Oz (1939)  (16:00 16:30)    $23.99     |\n" << endl;
	cout << "b. Casablanca (1942)     (17:00 18:30)    $21.99     |\n" << endl;
	cout << "c. Frankenstein (1931)   (19:00 20:30)    $21.99     |\n" << endl;
	cout << "d. Viernes 13 (2007)     (21:00 22:30)    $20.99     |\n" << endl;
	cout << "e. Titanic(1997)         (23:00 24:30)    $20.99     |\n" << endl;
}
void Menu::Servicios() {
	Encabezado(4);
	cout << "ELIJA EL SERVICIO QUE DESEA\n(a -b ) " << endl;
	cout << "a. Premium\n" << endl;
	cout << "b. Convencional" << endl;
}
void Menu::SalaPremium() {
	Encabezado(4);
	cout << "\nEL SERVICIO PREMIUM OFRECE LAS SIGUIENTES SALAS: (a - c)\n" << endl;
	cout << "a. Sala interactiva\n" << endl;
	cout << "b. Sala 3D\n" << endl;
	cout << "c. Sala 2d\n" << endl;
}
void Menu:: SalaConvencional() {
	Encabezado(4);
	cout << "EL SERVICIO CONVENCIONAL OFRECE LAS SIGUIENTES SALAS:(a -b)\n" << endl;
	cout << "a. Sala 3D\n" << endl;
	cout << "b. Sala 2D\n" << endl;
}
void Menu:: Asientos() {
	Encabezado(4);
	system("color 3");
	cout << "CONTAMOS CON 40 ASIENTOS\n";
	cout << "\n";
	for (int i = 0; i < 40; i++) {
		if (i < 10)cout << "|A" << i + 1 << "|" << "  ";
		if (i == 10)cout << "\n\n";
		if (i >= 10 && i < 20)cout << "|B" << i + 1 << "|" << " ";
		if (i == 20)cout << "\n\n";
		if (i >= 20 && i < 30)cout << "|C" << i + 1 << "|" << " ";
		if (i == 30)cout << "\n\n";
		if (i >= 30 && i < 40)cout << "|D" << i + 1 << "|" << " ";
		if (i == 40)cout << "\n\n";
	}
	cout << "\n";
}
void Menu:: Promociones() {
	Encabezado(4);
	cout << "\n+POR LA COMPRA DE 3 TICKETS, SE LLEVA UNA PEPSI GRATIS\n" << endl;
	cout << "\nPOR LA COMPRA DE 5 LLEVA UN BOTE MEDIANO DE POPCORN\n" << endl;
	cout << "'\nPOR LA COMPRA DE 6 A MAS TICKETS LLEVA UN PASE GRATIS\n" << endl;
	Encabezado(4);
}