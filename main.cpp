#include <iostream>
#include <string>
#include "Tren.h"

using namespace std;

int main() {
    Tren* tren = nullptr;
    bool running = true;

    while (running) {
        cout << "1. Registrar Tren" << endl;
        cout << "2. Editar Tren" << endl;
        cout << "3. Imprimir Datos del Tren" << endl;
        cout << "4. Salir" << endl;
        cout << "Elija una opción: ";
        int opcion;
        cin >> opcion;

        switch (opcion) {
            case 1: {
                int ventanas, puertas, pasajeros;
                double peso;
                string tipo;
                int cantidadDeVagones;

                cout << "Ingrese el número de ventanas: ";
                cin >> ventanas;
                cout << "Ingrese el número de puertas: ";
                cin >> puertas;
                cout << "Ingrese la cantidad de pasajeros: ";
                cin >> pasajeros;
                cout << "Ingrese el peso (kg): ";
                cin >> peso;
                cin.ignore();
                cout << "Ingrese el tipo de tren: ";
                getline(cin, tipo);
                cout << "Ingrese la cantidad de vagones: ";
                cin >> cantidadDeVagones;

                delete tren;
                tren = new Tren(ventanas, puertas, pasajeros, peso, tipo, cantidadDeVagones);
                cout << "Tren registrado exitosamente." << endl;
                break;
            }

            case 2:
                if (tren == nullptr) {
                    cout << "Primero debe registrar un tren." << endl;
                    break;
                }
                cout << "¿Qué desea editar?" << endl;
                cout << "1. Ventanas" << endl;
                cout << "2. Puertas" << endl;
                cout << "3. Pasajeros" << endl;
                cout << "4. Peso" << endl;
                cout << "5. Tipo" << endl;
                cout << "6. Cantidad de Vagones" << endl;
                cout << "Elija una opción: ";
                int editarOpcion;
                cin >> editarOpcion;

                switch (editarOpcion) {
                    case 1:
                        cout << "Ingrese el nuevo número de ventanas: ";
                        int ventanas;
                        cin >> ventanas;
                        tren->setVentanas(ventanas);
                        break;
                    case 2:
                        cout << "Ingrese el nuevo número de puertas: ";
                        int puertas;
                        cin >> puertas;
                        tren->setPuertas(puertas);
                        break;
                    case 3:
                        cout << "Ingrese la nueva cantidad de pasajeros: ";
                        int pasajeros;
                        cin >> pasajeros;
                        tren->setPasajeros(pasajeros);
                        break;
                    case 4:
                        cout << "Ingrese el nuevo peso (kg): ";
                        double peso;
                        cin >> peso;
                        tren->setPeso(peso);
                        break;
                    case 5:
                        cin.ignore();
                        {
                            cout << "Ingrese el nuevo tipo de tren: ";
                            std::string tipo;
                            getline(cin, tipo);
                            tren->setTipo(tipo);
                        }
                        break;
                    case 6:
                        cout << "Ingrese la nueva cantidad de vagones: ";
                        int cantidadDeVagones;
                        cin >> cantidadDeVagones;
                        tren->setCantidadDeVagones(cantidadDeVagones);
                        break;
                    default:
                        cout << "Opción no válida." << endl;
                        break;
                }
                cout << "Datos actualizados." << endl;
                break;

            case 3:
                if (tren == nullptr) {
                    cout << "Primero debe registrar un tren." << endl;
                    break;
                }
                // Imprimir Datos
                tren->imprimirDatos();
                break;

            case 4:
                running = false;
                cout << "Saliendo..." << endl;
                break;

            default:
                cout << "Opción no válida." << endl;
                break;
        }
    }

    delete tren;
    return 0;
}
