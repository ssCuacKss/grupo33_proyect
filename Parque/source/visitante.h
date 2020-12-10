/*
 * Visitante.h
 *
 *  Created on: 9 dic. 2020
 *      Author: Jesús
 */

#ifndef VISITANTE_H_
#define VISITANTE_H_

#include"ruta.h"
#include<iostream>
#include<string>
using namespace std;

class visitante : public Persona{
	private:
		bool discapacidad;
		bool grupo;
		ruta ruta;
	public:
		visitante(string dNi,string name="", string surname="",int age=0,string Uaddress="", string local="",string prov="",string Upais="", bool _discapacidad=false, bool _grupo=false, ruta _ruta);
		inline void setDisable(bool _discapacidad){ if(_discapacidad==false) discapacidad=false; else discapacidad=true;}
		inline bool getDisable(){return discapacidad;}
		inline void setGrupo(bool _grupo){ if(_grupo==false) grupo=false; else grupo=true;}
		inline bool getGrupo(){return grupo;}
		inline void setruta(ruta _ruta){ ruta=_ruta;}
		inline ruta getruta(){return ruta;}
};

#endif



#endif /* VISITANTE_H_ */
