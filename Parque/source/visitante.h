
#ifndef VISITANTE_H_
#define VISITANTE_H_

#include"persona.h"
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
		visitante(string, string, string, int , string, string ,string, bool, bool, string);
		inline void setDisable(bool _discapacidad){ if(_discapacidad==false) discapacidad=false; else discapacidad=true;}
		inline bool getDisable(){return discapacidad;}
		inline void setGrupo(bool _grupo){ if(_grupo==false) grupo=false; else grupo=true;}
		inline bool getGrupo(){return grupo;}
		inline void setruta(string _ruta){ruta.setNombre( _ruta);}
		inline string getruta(){return ruta.getNombre();}
};


#endif /* VISITANTE_H_ */

