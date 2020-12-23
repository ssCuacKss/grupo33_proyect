#ifndef ADMINISTRADOR_H_
#define ADMINISTRADOR_H_
#include<fstream>
#include<string>
#include<cstdlib>
#include <iostream>
#include <list>

#include "monitor.h"
#include "persona.h"
#include "ruta.h"
#include "visitante.h"

class admin : public Persona{
	private:
		list <monitor> monitores;
		list <admin> administradores;
		list <visitante> visitantes;
		list <ruta> rutas;
	public:
		admin(string dNi="",string name="", string surname="",int telefono=0,string Uaddress="",
		string email="",
		string birthdate="");
		void leeMonitores();
		void setMonitores();
		inline list <monitor> getMonitores(){return monitores;}
		bool addMonitores(monitor _monitor);
		bool delMonitores(monitor _monitor);
		void leeVisitantes();
		void setVisitantes();
		inline list <visitante> getVisitantes(){return visitantes;}
		bool delVisitantes(visitante _visitante);
		bool addVisitante(visitante _visitante);
		visitante findVisitante(string _dni);
		visitante findVisitante(string _name,string _surname);
		monitor findMonitor(string _dni);
		admin findAdmin(string _dni);
		void leeAdmin();
		void leeRutas();
		void setRutas(list <ruta> _rutas);
		inline list<ruta> getRutas(){return rutas;}
		void setAdmin();
		inline list <admin> getAdmin(){return administradores;}
		bool delAdmin(string _dni);
};

#endif
