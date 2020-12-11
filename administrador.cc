/*
 * administrador.cc
 *
 *  Created on: 11 dic. 2020
 *      Author: david
 */

#include "administrador.h"
#include <iostream>

	admin::admin(string dNi,string name="", string surname="",int telefono=0,string Uaddress="", string email="",string birthdate="",
	list <monitor> monitores,list <admin> administradores,list <visitante> visitantes,list <ruta> rutas):Persona(dNi, name, surname, age, Uaddress, email, birthdate)
	{
		getMonitores()=monitores;
		getAdmin()=administradores;			//En el constructor se cargan las
		getVisitantes()=visitantes;			//listas con los datos de los ficheros
		getRutas()=rutas;
	}

	void admin::setMonitores (list <monitor> _monitores)
	{
		list<monitor>::iterator it;
		std::fstream f;
		f.open("monitores.txt", std::fstream::out);
		for(it=monitores.begin();it!=monitores.end();it++)
		{
			f<<(*it).getDNI()+'n'+(*it).getNombre()+'n'+(*it).getApellidos()+(*it).getTelefono()+'n'
					+(*it).getDireccion()+'n'+(*it).getEmail()+'n'+(*it).getBirthdate()+'n'+"\n";
		}
		f.close();
	}
	bool admin::addMonitores(monitor _monitor){

	}
	bool admin::delMonitores(monitor _monitor){

	}
	void admin::setVisitantes(list<visitante> _visitantes){

	}
	bool admin::addVisitante(visitante _visitante){

	}
	bool admin::delVisitantes(visitante _visitante){

	}
	visitante admin::findVisitante(string _dni){

	}
	visitante admin::findVisitante(string _name,string _surname){

	}
	monitor admin::findMonitor(string _dni){

	}
	admin admin::findAdmin(string _dni){

	}
	void admin::setRutas(list <ruta> _rutas){

	}
	void admin::setAdmin(list <admin> _admins){

	}
	bool admin::delAdmin(string _dni){

	}
	bool admin::modAdmin(string_dni){

	}


