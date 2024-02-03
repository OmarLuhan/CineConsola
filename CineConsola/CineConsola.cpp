// CineConsola.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include<Windows.h>
#include "Menu.h"
#include "Validaciones.h"
#include "Calcular.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	system("color 9");
#pragma region variables de biblioteca
	Menu _menu;
	Validaciones _validar;
	Calcular _calcular;
#pragma endregion
	char opcion=' ';
	char respuesta = ' ';
	double costoTotal = 0;
	double costoPelicula = 0;
	double porcentaje = 1;
	int tickets = 0;
	_menu.Saludo();
	do {
		_menu.Peliculas();
		cin >> opcion;
		opcion = _validar.ValidarOpcion(opcion);
		if (opcion == 'a')
			cout << "\n Sele mostrara una lista de las peliculas de estreno " << endl;
		else
			cout << "\n se le mostrara una lista de peliculas clasicas" << endl;
		cout << "\n (a) esoy de acuerdo" << endl;
		cout << "\n (b) no, elegir otra opccion" << endl;
		cin >> respuesta;
		respuesta = _validar.ValidarOpcion(respuesta);
	} while (respuesta != 'a');
	switch (opcion) {
		case'a':
			do {
				system("cls");
				_menu.Estreno();
				cout << "\nIngrese la pelicula que desea ver:(a - e) " << endl;
				cin >> opcion;
				opcion = _validar.ValidarOpcion5(opcion);
				switch (opcion) {
					case 'a':
						costoPelicula = 24.70;
						cout << "\nLa pelicula [Star Wars: Episodio IX] cuesta: S/" << costoPelicula << endl;
						Sleep(2000); break;
					case 'b':
						costoPelicula = 26.50;
						cout << "\nLa pelicula [IT :Capitulo II] cuesta: S/" << costoPelicula << endl;
						Sleep(2000); break;
					case 'c':
						costoPelicula = 21.80;
						cout << "\nLa pelicula [Zombie Land 2] cuesta: S/" << costoPelicula << endl;
						Sleep(2000);
						break;
					case 'd':
						costoPelicula = 22.99;
						cout << "\nLa pelicula [Terminator: Destino oscuro] cuesta: S/" << costoPelicula << endl;
						Sleep(2000);
						break;
					case 'e':
						costoPelicula = 25.99;
						cout << "\nLa pelicula [Alma Maldita] cuesta: S/" << costoPelicula << endl;
						Sleep(2000);
						break;
					default:
						cout << "\n Parece que ha ocurrido un  problema con la eleccion, intente nuevamente: " << endl;
						Sleep(2000);
				}
				cout << "\n Se agregara el costo de la pelicula :" << costoPelicula << " a su cuenta actual de : " << costoTotal << endl;
				cout << "\n (a): si" << endl;
				cout << "\n (b): no, eleir otra" << endl;
				cin >> respuesta;
				respuesta = _validar.ValidarOpcion(respuesta);
			} while (respuesta != 'a');
			costoTotal = _calcular.SumaAcumulativa(costoTotal, costoPelicula);
			break;
		case'b':
			_menu.Clasicos();
			do {
				cout << "\nIngrese la pelicula que desea ver:(a - e) " << endl;
				cin >> opcion;
				opcion = _validar.ValidarOpcion5(opcion);
				switch (opcion) {
				case 'a':
					costoPelicula = 23.99;
					cout << "\nLa pelicula [El mago de Oz (1939)] cuesta:" << costoPelicula << endl;
					Sleep(2000); break;
				case 'b':
					costoPelicula = 21.99;
					cout << "\nLa pelicula [Casablanca (1942)] cuesta:" << costoPelicula << endl;
					Sleep(2000); break;
				case 'c':
					costoPelicula = 21.99;
					cout << "\nLa pelicula [Frankenstein (1931)] cuesta:" << costoPelicula << endl;
					Sleep(2000); break;
				case 'd':
					costoPelicula = 20.99;
					cout << "\nLa pelicula [Viernes 13 (2007)] cuesta:" << costoPelicula << endl;
					Sleep(2000); break;
				case 'e':
					costoPelicula = 20.99;
					cout << "\nLa pelicula [Titanic(1997)] cuesta:" << costoPelicula << endl;
					Sleep(2000); break;
				}
				cout << "\n Se agregara el costo de la pelicula :" << costoPelicula << " a su cuenta actual de : " << costoTotal << endl;
				cout << "\n (a): si" << endl;
				cout << "\n (b): no, eleir otra" << endl;
				cin >> respuesta;
				respuesta = _validar.ValidarOpcion(respuesta);
			} while (respuesta !='a');
			costoTotal = _calcular.SumaAcumulativa(costoTotal, costoPelicula);
			break;
	}
	cout << "                                                                                     SUBTOTAL A PAGAR : " << costoTotal<<endl;
	system("pause");
	do {
		system("cls");
		system("color 02 ");
		_menu.Servicios();
		cout << "                                                                                 SUBTOTAL A PAGAR : " << costoTotal<<endl;
		cin >> opcion;
		opcion = _validar.ValidarOpcion(opcion);
		if (opcion == 'a')
			cout << "\ha elegido el servicio premuim" << endl;
		else
			cout << "\ha elegido el servicio convencional" << endl;

		cout << " (a) continuar" << endl;
		cout << " (b) elegir otra opcion" << endl;
		cin >> respuesta;
		cout << "                                                                                     SUBTOTAL A PAGAR : " << costoTotal << endl;
	} while (respuesta!='a');
	system("cls");
	switch (opcion) {

		case'a':
			do {
				do {
					_menu.SalaPremium();
					cin >> opcion;
					opcion = _validar.ValidarOpcion3(opcion);
					if (opcion == 'a')
						cout << "\ha elegido sala interactiva" << endl;
					else
						if (opcion == 'b')
							cout << "\ha elegido sala 3D" << endl;
						else
							cout << "\ha elegido sala 2D" << endl;

					cout << " (a) continuar" << endl;
					cout << " (b) elegir otra opcion" << endl;
					cin >> respuesta;
				} while (respuesta != 'a');

				switch (opcion) {
				case'a':
					porcentaje = 1.10;
					cout << "\nSe le asigno un 10% adicional a su cuenta  por uso de sala" << endl;
					break;
				case'b':
					porcentaje = 1.05;
					cout << "\nSe le asigno un 5% adicional a su cuenta por uso de sala" << endl;
					break;
				case'c':
					cout << "\nExelente elección" << endl;
					break;
				}
				cout << "\n Se le sumara un porcentaje de  :" << (porcentaje * 100)-100 << "% por uso de sala " << endl;
				cout << "\n El monto de :" << (costoPelicula * porcentaje)-costoPelicula << "(" << (porcentaje * 100) - 100 << ")%  a su cuenta actual de " << costoTotal << endl;
				cout << "\n (a): si" << endl;
				cout << "\n (b): no, eleir otra sala" << endl;
				cin >> respuesta;
				respuesta = _validar.ValidarOpcion(respuesta);
			} while (respuesta!='a');
			costoTotal = _calcular.SumarProcentaje(costoTotal, porcentaje);
			cout << "                                                                                       SUBTOTAL A PAGAR : " << costoTotal << endl;
			system("pause");
			break;
		case'b':
			do {
				do {
					_menu.SalaConvencional();
					cin >> opcion;
					opcion = _validar.ValidarOpcion(opcion);
					if (opcion == 'a')
						cout << "\ha elegido sala 3D" << endl;
					else
						cout << "\ha elegido sala 2D" << endl;

					cout << " (a) continuar" << endl;
					cout << " (b) elegir otra opcion" << endl;
					cin >> respuesta;
				} while (respuesta != 'a');

				switch (opcion)
				{
				case'a':
					porcentaje = 1.05;
					cout << "Se le asigno un 5% adicional a su cuenta  por uso de sala\n" << endl;
					break;
				case'b':
					cout << "Exelente eleccion!" << endl;
					break;
				}
				cout << "\n Se le sumara un porcentaje de  :" << (porcentaje * 100) - 100 << "% por uso de sala " << endl;
				cout << "\n El monto de :" << (costoPelicula * porcentaje) - costoPelicula << "(" << (porcentaje * 100) - 100 << ")%  a su cuenta actual de " << costoTotal << endl;
				cout << "\n (a): si" << endl;
				cout << "\n (b): no, eleir otra sala" << endl;
				cin >> respuesta;
				respuesta = _validar.ValidarOpcion(respuesta);
			} while (respuesta!='a');
			costoTotal = _calcular.SumarProcentaje(costoTotal , porcentaje);
			cout << "                                                                                 SUBTOTAL A PAGAR : " << costoTotal << endl;
			system("pause");
			break;
	}
	system("cls");
	_menu.Encabezado(4);
	cout << "EL PRECIO POR CADA TICKET ES S/." << costoTotal << "\n" << endl;
	cout << "REDONDEANDO SERIA S/." << round(costoTotal) << "\n" << endl;
	system("\npause");
	system("cls");
	_menu.Asientos();
	_menu.Promociones();
	cout << "\n cuantos tikets desea (maximo 10)" << endl;
	cin >> tickets;
	system("cls");
	if (tickets == 3) {
		cout << "POR SU COMPRA SE LLEVA UN PEPSI GRATIS!\n" << endl;
		system("pause");
	}

	if (tickets == 5) {
		cout << "SE LLEVARA UN BOTE MEDIANO DE POPCORN\n" << endl;
		system("pause");
	}
	if (tickets >= 6) {
		cout << "FELICIDADES SE LLEVARA UN TICKET COMPLETAMENTE GRATIS\n" << endl;
		system("pause");
	}
	cout << "\n";
	cout << "                                                                                         SUBTOTAL A PAGAR : " << costoTotal << endl;
	return 0;
}
