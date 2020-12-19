/*
 * Parque.h
 *
 *  Created on: 10 dic. 2020
 *      Author: Jesús
 */

#ifndef PARQUE_H_
#define PARQUE_H_
#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<list>
#include<vector>
#include"visitante.h"
#include"ruta.h"
#include"cuenta.h"

using namespace std;

class parque{
private:
	string localizacion;
	string provincia;
	string inauguracion;
	list<string> premios;
	list<ruta> rutas;
	//list<monitor> monitores;
	//list<admin> admins;
	list<visitante> visitantes;
	list<Cuenta> cuentas;
public:
	parque(string, string, string, list<string>, list<ruta>, list<visitante>, list<Cuenta>);
};





#endif /* PARQUE_H_ */
