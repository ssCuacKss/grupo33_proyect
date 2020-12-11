/*
 * administrador.h
 *
 *  Created on: 11 dic. 2020
 *      Author: david
 */

#ifndef ADMINISTRADOR_H_
#define ADMINISTRADOR_H_
#include <list>
#include "persona.h"
#include "monitor.h"
#include "visitante.h"
#include "ruta.h"

class admin : public Persona{
	private:
		list <monitor> monitores;
		list <admin> administradores;
		list <visitante> visitantes;
		list <ruta> rutas;
	public:
		admin(string dNi,string name="", string surname="",int telefono=0,string Uaddress="", string email="",string birthdate="");
		void setMonitores(list <monitor> _monitores);
		inline list <monitor> getMonitores(){return monitores;}
		bool addMonitores(monitor _monitor);
		bool delMonitores(monitor _monitor);
		void setVisitantes(list<visitante> _visitantes);
		inline list <visitante> getVisitantes(){return visitantes;}
		bool delVisitantes(visitante _visitante);
		bool addVisitante(visitante _visitante);
		visitante findVisitante(string _dni);
		visitante findVisitante(string _name,string _surname);
		monitor findMonitor(string _dni);
		admin findAdmin(string _dni);
		void setRutas(list <ruta> _rutas);
		inline list<ruta> getRutas(){return rutas;}
		void setAdmin(list <admin> _admins);
		inline list <admin> getAdmin(){return administradores;}
		bool delAdmin(string _dni);
		bool modAdmin(string_dni);
};

#endif /* ADMINISTRADOR_H_ */
