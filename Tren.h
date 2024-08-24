//
// Created by AmbarPC on 23/08/2024.
//

#ifndef TREN_H
#define TREN_H

#include "Transporte .h"
#include <iostream>

class Tren : public Transporte {
private:
    std::string tipo;
    int cantidadDeVagones;

public:

    Tren(int ventanas, int puertas, int pasajeros, double peso, const std::string& tipo, int cantidadDeVagones)
            : Transporte(ventanas, puertas, pasajeros, peso), tipo(tipo), cantidadDeVagones(cantidadDeVagones) {}


    std::string getTipo() const { return tipo; }
    void setTipo(const std::string& tipo) { this->tipo = tipo; }

    int getCantidadDeVagones() const { return cantidadDeVagones; }
    void setCantidadDeVagones(int cantidadDeVagones) { this->cantidadDeVagones = cantidadDeVagones; }


    void imprimirDatos() const override {
        std::cout << "Ventanas: " << getVentanas() << std::endl;
        std::cout << "Puertas: " << getPuertas() << std::endl;
        std::cout << "Pasajeros: " << getPasajeros() << std::endl;
        std::cout << "Peso: " << getPeso() << " kg" << std::endl;
        std::cout << "Tipo: " << tipo << std::endl;
        std::cout << "Cantidad de Vagones: " << cantidadDeVagones << std::endl;
    }
};

#endif // TREN_H
