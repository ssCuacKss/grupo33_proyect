/*
 * ruta.h
 *
 *  Created on: 3 dic. 2020
 *      Author: david
 */

#ifndef RUTA_H_
#define RUTA_H_
#include <string>

class ruta{
	private:
		string recorrido;
		int longitud;
		int tiempo;
		string paisaje;
		int tipoJornada;
		int transporte;
		int aforo;
		int dificultad;
		string nombre;
	public:
		ruta(int _longitud=0,string _recorrido="",int _tiempo=0,int _jornada=0,string _paisaje="",int _transporte=0,int _aforo=0,
				int _dificultad=0,string _nombre="");
		inline int getLongitud(){return longitud;}
		inline string getRecorrido(){return recorrido;}
		inline int getTiempo(){return tiempo;}
		inline int getJornada(){return tipoJornada;}
		inline string getPaisaje(){return paisaje;}
		inline int getTransporte(){return transporte;}
		inline int getAforo(){return aforo;}
		inline int getDificultad(){return dificultad;}
		inline string getNombre(){return nombre;}

		inline void setLongitud(int p1){longitud=p1;}
		inline void setRecorrido(string p1){recorrido=p1;}
		inline void setTiempo(int p1){tiempo=p1;}
		inline void setJornada(int p1){tipoJornada=p1;}
		inline void setPaisaje(string p1){paisaje=p1;}
		inline void setTransporte(int p1){transporte=p1;}
		inline void setAforo(int p1){aforo=p1;}
		inline void setDificultad(int p1){dificultad=p1;}
		inline void setNombre(string p1){nombre=p1;}
};

#endif /* RUTA_H_ */
