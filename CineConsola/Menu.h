#include<string>
#pragma once
#ifndef MENU_H
#define MENU_H
class Menu {
public:
    void Saludo();
    void Encabezado(int);
    void Peliculas();
    void Estreno();
    void Clasicos();
    void Servicios();
    void SalaPremium();
    void SalaConvencional();
    void Asientos();
    void Promociones();
    void ListarUsuarios(std::string* usuarios , int numeroUsuarios);
    void Combos();

    void Tipodecliente();
    void Bebidas();
    void Tarjeta();
    void Credito();
    void Devito();
    
    void Arreyasientos();
};
#endif 