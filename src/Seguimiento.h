//
// Created by alfon on 2/6/2021.
//

#ifndef TP2ALGORITMOS_SEGUIMIENTO_H
#define TP2ALGORITMOS_SEGUIMIENTO_H


#include <string>
#include "Lista.h"
#include "GenSeguimiento.h"
#include "Tablero.h"
class Seguimiento {
private:
    std::string informacionGeneticaDelGen;
    unsigned int turnoDeComienzo;
    unsigned int turnoDeFinalizacion;
    Lista<GenSeguimiento*>* listadoPorTurno;
public:
    Seguimiento();

    Seguimiento(std::string informacionGenetica, unsigned int turnoInicio);

    void modificarTurnoInicio(unsigned int turnoInicio);

    void modificarTurnoFin(unsigned int turnoFin);

    void agregarTurnoAGen(unsigned int cargaAcumulada, unsigned int turno);

    void buscarTablero(Tablero *unTablero, unsigned int turno);
};



#endif //TP2ALGORITMOS_SEGUIMIENTO_H