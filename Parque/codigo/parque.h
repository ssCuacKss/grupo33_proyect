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

#include "../codigo/admin.h"
#include "../codigo/cuenta.h"
#include "../codigo/monitor.h"
#include "../codigo/persona.h"
#include "../codigo/ruta.h"
#include "../codigo/visitante.h"

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
	parque(string, string, int, string, list<string> ,string);
	void setLocal(string _localizacion){localizacion=_localizacion;}
	string getLocal(){return localizacion;}
	string getProv(){return provincia;}
	int getSurface(){return superficie;}
	void setProv(string _provincia){provincia=_provincia;}
	string getFecha(){return fecha;}
	void setSurface(int _superficie){superficie=_superficie;}
	void setFecha(string _fecha){fecha=_fecha;}
	string getInauguracion(){return inauguracion;}
	void setInauguracion(string _inauguracion){inauguracion=_inauguracion;}
	void setPremio(string premio){ premios.push_back(premio);}
	void setPremios(_premios);
	list<string> getPremios(){return premios;}
};




#endif /* PARQUE_H_ */

