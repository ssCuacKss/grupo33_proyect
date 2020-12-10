/*
 * visitante.cc
 *
 *  Created on: 9 dic. 2020
 *      Author: Jesús
 */

#include"visitante.h"

visitante::visitante(string dNi,string name="", string surname="",int age=0,string Uaddress="", string local="",string prov="",string Upais="", bool _discapacidad=false, bool _grupo=false, string _ruta) : Persona(dNi, name, surname, age, Uaddress,  local, prov, Upais)
{
discapacidad= _discapacidad;
grupo= _grupo;
ruta.nombre= _ruta;
}


