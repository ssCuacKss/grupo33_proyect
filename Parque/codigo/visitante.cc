/*
 * visitante.cc
 *
 *  Created on: 9 dic. 2020
 *      Author: Jesús
 */

#include "visitante.h"
#include<parque.h>

visitante::visitante(string dni,string name, string surname,int telefono,string direccion, string email,string birthdate,
bool _discapacidad=false, bool _grupo=false, string _ruta) : Persona(dNi, name, surname, telefono, direccion,  email, birthdate)
{
discapacidad= _discapacidad;
grupo= _grupo;
ruta.nombre= _ruta;
escribevisitantes();

    }




