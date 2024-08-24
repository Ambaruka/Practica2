//
// Created by AmbarPC on 23/08/2024.
//

// Transporte.h
#ifndef TRANSPORTE_H
#define TRANSPORTE_H

class Transporte {
protected:
    int ventanas;
    int puertas;
    int pasajeros;
    double peso;

public:

    Transporte(int ventanas, int puertas, int pasajeros, double peso)
            : ventanas(ventanas), puertas(puertas), pasajeros(pasajeros), peso(peso) {}


    int getVentanas() const { return ventanas; }
    void setVentanas(int ventanas) { this->ventanas = ventanas; }

    int getPuertas() const { return puertas; }
    void setPuertas(int puertas) { this->puertas = puertas; }

    int getPasajeros() const { return pasajeros; }
    void setPasajeros(int pasajeros) { this->pasajeros = pasajeros; }

    double getPeso() const { return peso; }
    void setPeso(double peso) { this->peso = peso; }


    virtual void imprimirDatos() const = 0;
};

#endif // TRANSPORTE_H
