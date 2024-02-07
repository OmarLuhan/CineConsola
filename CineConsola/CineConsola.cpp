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
#pragma region variables opciones y respuestas
	char opcion=' ';
	char respuesta = ' ';
#pragma endregion
#pragma region variables de presios y calculos
	double costoTotal = 0;
	double costoPelicula = 0;
	double porcentaje = 1;
	string tickets = " ";
	int numeroTickets = 0;
	string posicion = " ";
	int numeroPosicion = 0;
	double precioCombo = 0;
	string cantidadCombos = " ";
	int numeroCantidadCombos = 0;
#pragma endregion
#pragma region boleta
	string nombre = "";
	string* usuarios;
	string nombrePelicula;
	string servicio;
	string sala;
	double costoTicket=0;
	int numeroTicketsBoleta = 0;
	string combos = " sin combos";
	string adicionales = "sin adicionales";
	string ticketGratis = "si tickets gratis";

#pragma endregion

	nombre=_menu.Saludo();
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
						nombrePelicula = "Star Wars: Episodio IX    (6:00 - 7:30)";
						cout << "\nLa pelicula [Star Wars: Episodio IX] cuesta: S/" << costoPelicula << endl;
						break;
					case 'b':
						costoPelicula = 26.50;
						nombrePelicula = "IT :Capitulo II           (7:00 - 8:30)";
						cout << "\nLa pelicula [IT :Capitulo II] cuesta: S/" << costoPelicula << endl;
						break;
					case 'c':
						costoPelicula = 21.80;
						nombrePelicula = "Zombie Land 2             (9:00 - 10:30)";
						cout << "\nLa pelicula [Zombie Land 2] cuesta: S/" << costoPelicula << endl;
						break;
					case 'd':
						costoPelicula = 22.99;
						nombrePelicula = "Terminator: Destino oscuro(11:00 - 12:30)";
						cout << "\nLa pelicula [Terminator: Destino oscuro] cuesta: S/" << costoPelicula << endl;
						break;
					case 'e':
						costoPelicula = 25.99;
						nombrePelicula = "Alma Maldita              (13:00 -14:30)";
						cout << "\nLa pelicula [Alma Maldita] cuesta: S/" << costoPelicula << endl;
						break;
					default:
						cout << "\n Parece que ha ocurrido un  problema con la eleccion, intente nuevamente: " << endl;
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
					nombrePelicula = "El mago de Oz (1939)  (16:00 16:30)";
					cout << "\nLa pelicula [El mago de Oz (1939)] cuesta:" << costoPelicula << endl;
					Sleep(2000); break;
				case 'b':
					costoPelicula = 21.99;
					nombrePelicula = "Casablanca (1942)     (17:00 18:30)";
					cout << "\nLa pelicula [Casablanca (1942)] cuesta:" << costoPelicula << endl;
					Sleep(2000); break;
				case 'c':
					costoPelicula = 21.99;
					nombrePelicula = "Frankenstein (1931)   (19:00 20:30)";
					cout << "\nLa pelicula [Frankenstein (1931)] cuesta:" << costoPelicula << endl;
					Sleep(2000); break;
				case 'd':
					nombrePelicula = "Viernes 13 (2007)     (21:00 22:30)";
					costoPelicula = 20.99;
					cout << "\nLa pelicula [Viernes 13 (2007)] cuesta:" << costoPelicula << endl;
					Sleep(2000); break;
				case 'e':
					nombrePelicula = "Titanic (1997)     (21:00 22:30)";
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
					servicio = "premium";
					cin >> opcion;
					opcion = _validar.ValidarOpcion3(opcion);
					if (opcion == 'a') {
						cout << "\ha elegido sala interactiva" << endl;
						sala = "Sala interactiva";
					}
					else {
						if (opcion == 'b') {
							cout << "\ha elegido sala 3D" << endl;
							sala = "sala 3D";
						}
						else {
							cout << "\ha elegido sala 2D" << endl;
							sala = "Sala 2D";
						}
					}
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
			costoTicket = costoTotal;
			cout << "                                                                                       SUBTOTAL A PAGAR : " << costoTotal << endl;
			system("pause");
			break;
		case'b':
			do {
				do {
					_menu.SalaConvencional();
					servicio = "Convencional";
					cin >> opcion;
					opcion = _validar.ValidarOpcion(opcion);
					if (opcion == 'a') {
						cout << "\ha elegido sala 3D" << endl;
						sala = "sala 2d";
					}
					else {
						cout << "\ha elegido sala 2D" << endl;
						sala = "salal 3d";
					}

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
	do {
		do {
			system("cls");
			_menu.Asientos();
			_menu.Promociones();
			cout << "\n cuantos tikets desea (maximo 10)" << endl;
			cin >> tickets;
			numeroTickets = _validar.ValidarNumero(tickets);
			if (numeroTickets < 1)
				cout << "ingrese un numero positivo " << endl;
			if (numeroTickets > 10)
				cout << " ingrese un numero menor a 10" << endl;
			Sleep(500);
		} while (numeroTickets<1|| numeroTickets>10);
		cout << "Usted esta por comprar " << numeroTickets << "tickets " << endl;
		cout << "El costo por cada ticket es de  "<<costoTotal<<" y por los "<<numeroTickets<<" tickets"<<endl;
		cout << " Seria un total de :$" << costoTotal*numeroTickets<<endl;
		cout << "\n (a): si" << endl;
		cout << "\n (b): no, ingresar nueva cantidad" << endl;
		cin >> respuesta;
		respuesta = _validar.ValidarOpcion(respuesta);
	} while (respuesta!='a');
	costoTotal = costoTotal * numeroTickets;
	numeroTicketsBoleta = numeroTickets;
	system("cls");
	if (numeroTickets == 3) {
		cout << "POR SU COMPRA SE LLEVA UN PEPSI GRATIS!\n" << endl;
		adicionales = "Pesi gratis";
		system("pause");
	}

	if (numeroTickets == 5) {
		cout << "SE LLEVARA UN BOTE MEDIANO DE POPCORN\n" << endl;
		adicionales = "bote mediano de canchita";
		system("pause");
	}
	if (numeroTickets >= 6) {
		cout << "FELICIDADES SE LLEVARA UN TICKET COMPLETAMENTE GRATIS\n" << endl;
		cout << " Ahora usted tiene " << ++numeroTickets << " tickets por el precio de :$" << costoTotal << endl;
		ticketGratis = "1 ticket adcional";
		system("pause");
	}
	
	cout << "\n";
	cout << "                                                                                         SUBTOTAL A PAGAR : " << costoTotal << endl;
	system("pause ");
	system("cls");
	cout << "Usted tiene :"<<numeroTickets<<"Tickets" << endl;
	cout << "Porfavor ingrese el nombre de la persona que usara el ticket , en este caso seran :" << numeroTickets << " nombres" << endl;
	
	fflush(stdin);
	usuarios = new string[numeroTickets];
	for (int i = 0; i < numeroTickets; i++) {
		cout << "ingrese el [" << i + 1 << "°] mombre para el asiento numero["<<i+1<<"]" << endl;
		cin >> usuarios[i];
		fflush(stdin);
	}
	Sleep(1000);
	system("cls");
	_menu.Encabezado(3);
		do {
			fflush(stdin);
			_menu.ListarUsuarios(usuarios, numeroTickets);
			cout << "\n";
			cout << "a) Continuar "<<endl;
			cout << "b) Editar nombres de usuarios" << endl;
			fflush(stdin);
			cin >> respuesta;
			respuesta = _validar.ValidarOpcion(respuesta);
			if (opcion == 'b') {
				do {
					cout << "Ingrese el numero de poscion que desea editar (1 -" << numeroTickets << ")" << endl;
					cin >> posicion;
					numeroPosicion = _validar.ValidarNumero(posicion);
				} while (!(_validar.ValidarRango(numeroPosicion, 1, numeroTickets)));
				cout << " ingrese el nuevo nombe:                                 (valor actual: '" << usuarios[numeroPosicion - 1] << "')" << endl;
				cin >> usuarios[numeroPosicion - 1];
				cout << "\n";
				cout << "usuario actualizado " << endl;
			}
			
		} while (respuesta !='a');
		cout << "                                                                                         SUBTOTAL A PAGAR : " << costoTotal << endl;
		system("pause");
		system("cls");
		cout << "¿DESEA ADQUIRIR ALGUN COMBO?\n" << endl;
		cout << "a) NO,Continuar " << endl;
		cout << "b) SI, elegir" << endl;
		cin >> respuesta;
		respuesta = _validar.ValidarOpcion(respuesta);
		if (respuesta == 'b') {
			do {
				do {
					_menu.Combos();
					cout << "ingrese la opcion que desea (a-c)" << endl;
					cin >> opcion;
					opcion = _validar.ValidarOpcion3(opcion);
					switch (opcion) {
					case 'a':
						precioCombo = 33.50;
						combos = "combo NACHOS";
						cout << "\nEl combo NACHOS cuesta $" << precioCombo << endl; break;
					case 'b':
						precioCombo = 39.90;
						combos = "combo DUO";
						cout << "\nEl combo DUO cuesta $" << precioCombo << endl; break;
					case 'c':precioCombo = 20.60;
						combos = "combo COMBINACION";
						cout << "\nEl combo COMBINACION cuesta $" << precioCombo << endl; break;
					}
					cout << "a) continuar" << endl;
					cout << "b) elegir otro combo" << endl;
					cin >> respuesta;
					respuesta = _validar.ValidarOpcion(respuesta);
				} while (respuesta != 'a');
				do {
					do {
						cout << " Cunatos combos desea adquirir (maximo 10) " << endl;
						cin >> cantidadCombos;
						numeroCantidadCombos = _validar.ValidarNumero(cantidadCombos);
						if (numeroCantidadCombos < 1)
							cout << "ingrese un numero positivo " << endl;
						if (numeroCantidadCombos > 10)
							cout << " ingrese un numero menor a 10" << endl;
						Sleep(500);
					} while (numeroCantidadCombos < 1 || numeroCantidadCombos>10);
					cout << " El precio por 1 combo es de $" << precioCombo << endl;
					cout << "usted esta por adquirir " << numeroCantidadCombos << " y el precio total serian de " << precioCombo * numeroCantidadCombos << endl;

					cout << "a) continuar" << endl;
					cout << "b) ingresar otra cantidad" << endl;
					cin >> respuesta;
					respuesta = _validar.ValidarOpcion(respuesta);
				} while (respuesta != 'a');
				cout << " se le aggregara el mont de $" << precioCombo * numeroCantidadCombos << " a su cuanta actual de $ " << costoTotal << endl;
				cout << "a) si" << endl;
				cout << "b) elegir otros combos" << endl;
				cin >> respuesta;
				respuesta = _validar.ValidarOpcion(respuesta);
			} while (respuesta!='a');
			costoTotal = _calcular.SumaAcumulativa(costoTotal, precioCombo * numeroCantidadCombos);
			
			cout << "                                                                                         SUBTOTAL A PAGAR : " << costoTotal << endl;

		}
		Sleep(1000);
		system("cls");
		cout << " aqui esta un resumen de lo que ha elegido: " << endl;
		cout << " nombre de usuario : " << nombre << endl;
		cout << "________________________________________________________________________" << endl;
		cout << " pelicula/funcion : " << nombrePelicula<<" $"<< costoPelicula<<endl;
		cout << "servicio :" <<servicio << endl;
		cout << " sala :"<<sala<<"$" << (costoPelicula * porcentaje) - costoPelicula << "(" << (porcentaje * 100) - 100<<"%) " << endl;
		cout << "________________________________________________________________________" << endl;
		cout << " costo por ticket/entrada: Pelicula/funcion + servicio/sala $" <<costoTicket<< endl;

		cout << "tickets/entradas $: "<<costoTicket << "cantidad : "<< numeroTicketsBoleta << "$ "<< costoTicket* numeroTicketsBoleta <<endl;
		cout << "Tickets gratis " << ticketGratis << endl;
		cout << " lista de personas que ingresaran : " << endl;
		_menu.ListarUsuarios(usuarios, numeroTickets);
		cout << " \n combos: "<<combos<<" $ "<<precioCombo << "cantidad: " <<numeroCantidadCombos<< "$ " <<precioCombo*numeroCantidadCombos<< endl;
		cout << " adicionales: " << adicionales << endl;
        cout << "   SUB TOTAL (sin redondear): " << costoTotal << endl;
		cout << "   SUBTOTAL A PAGAR : " << costoTotal << endl;

	delete[] usuarios;
	return 0;
}
