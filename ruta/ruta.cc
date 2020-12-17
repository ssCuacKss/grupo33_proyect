/*
 * ruta.cc
 *
 *  Created on: 12 dic. 2020
 *      Author: david
 */

#include <string>
using namespace std;
#include "ruta.h"

ruta::ruta(int _longitud,string _recorrido,int _tiempo,int _jornada,string _paisaje,int _transporte,int _aforo,
		int _dificultad,string _nombre)
{
	longitud=_longitud;
	recorrido=_recorrido;
	tiempo=_tiempo;
	paisaje=_paisaje;
	tipoJornada=_jornada;
	transporte=_transporte;
	aforo=_aforo;
	dificultad=_dificultad;
	nombre=_nombre;
}


