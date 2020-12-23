/*
 * ruta.h
 *
 *  Created on: 3 dic. 2020
 *      Author: david
 */

#include<string>
#ifndef RUTA_H_
#define RUTA_H_

class ruta{
	private:
		string recorrido;
		int longitud;
		int tiempo;
		string paisaje;
		string tipoJornada;
		string transporte;
		int aforo;
		int dificultad;
		string nombre;

	public:
		ruta(int _longitud,string _recorrido,int _tiempo,int _jornada,string _paisaje,int _transporte,int _aforo,int _dificultad, string _nombre);
		inline int getLongitud(){return longitud;}
		inline string getRecorrido(){return recorrido;}
		inline int getTiempo(){return tiempo;}
		inline int getJornada(){return tipoJornada;}
		inline string getPaisaje(){return paisaje;}
		inline int getTransporte(){return transporte;}
		inline int getAforo(){return aforo;}
		inline int getDificultad(){return dificultad;}
		inline string getNombre(){return nombre;}
		inline void setLongitud(int longitud_){longitud=longitud_;}
		inline void setRecorrido(string recorrido_){recorrido=recorrido_;}
		inline void setTiempo(int tiempo_){tiempo=tiempo_;}
		inline void setJornada(string jornada_){tipoJornada=jornada_;}
		inline void setPaisaje(string paisaje_){paisaje=paisaje_;}
		inline void setTransporte(string transporte_){transporte=transporte_;}
		inline void setAforo(int aforo_){aforo=aforo_;}
		inline void setDificultad(int dificultad_){dificultad=dificultad_;}
		inline void setNombre(string nombre_){nombre=nombre_;}
};

#endif /* RUTA_H_ */

