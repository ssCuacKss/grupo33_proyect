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
#include"monitor.h"
#include"admin.h"
#include"persona.h"

using namespace std;

class parque{
private:
	string localizacion;
	string provincia;
	int superficie;
	string inauguracion;
	list<string> premios;
	list<ruta> rutas;
	list<monitor> monitores;
	list<admin> admins;
	list<visitante> visitantes;
	list<Cuenta> cuentas;
	string fecha;
public:
	parque(string, string, int, string, list<string>, list<ruta>, list<visitante>, list<Cuenta>,string);
	void setLocal(string _localizacion){localizacion=_localizacion;}
	void setProv(string _provincia){provincia=_provincia;}
	void setSurface(int _superficie){superficie=_superficie;}ç
	void setFecha(string _fecha){fecha=_fecha}
};




#endif /* PARQUE_H_ */
