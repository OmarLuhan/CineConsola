#include<iostream>
#include <math.h>
#include "Calcular.h"

float Calcular:: SumaAcumulativa(double x, double y) {
	return x + y;
}
double Calcular::  SumarProcentaje(double x, double y) {
	return x * y;
}
float Calcular:: Primercombo(double acumulado) {
	return acumulado + 33.50;
}
float Calcular :: SegundoCombo(double acumulado) {
	return acumulado + 39.90;
}
float Calcular:: Tercercombo(double acumulado) {
	return acumulado + 20.60;
}
float Calcular :: Bebidaporcant(int cantidad, double precio) {
	return cantidad * precio;
}
float Calcular:: Dividir(double x, int y) {
	return x / y;
}
