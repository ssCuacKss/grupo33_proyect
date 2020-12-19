/*
 * parque.cc
 *
 *  Created on: 10 dic. 2020
 *      Author: Jesús
 */

#include"parque.h"

parque::parque(string _localizacion, string _provincia, string _inauguracion,list<string> _premios, list<ruta> _rutas, list<visitante> _visitantes, list<Cuenta> _cuentas)
{
	//rutas
			string recorridox;
			int longitudx;
			int tiempox;
			string paisajex;
			string tipoJornadax;
			string transportex;
			int aforox;
			int dificultadx;
			string nombrex;

	ifstream archivo_entrada;
		archivo_entrada.open(localizacion+"rutas.txt");
		if (archivo_entrada.fail()) cout<< "El archivo no se abrio correctamente"<<endl;
		for(list<ruta>::iterator i=rutas.begin(); i<10;i++){
			while(archivo_entrada!='\n'){
						archivo_entrada>>recorridox;
						i->setRecorrido(recorridox);
						archivo_entrada>>longitudx;
						i->setLongitud(longitudx);
						archivo_entrada>>tiempox;
						i->setTiempo(tiempox);
						archivo_entrada>>paisajex;
						archivo_entrada>>tipoJornadax;
						i->setJornada(tipoJornadax);
						archivo_entrada>>transportex;
						i->setTransporte(transportex);
						archivo_entrada>>aforox;
						i->setAforo(aforox);
						archivo_entrada>>dificultadx;
						i->setDificultad(dificultadx);
						archivo_entrada>>nombrex;
						i->setNombre(nombrex);
					}
		}
		archivo_entrada.close();

	//visitantes




		localizacion=_localizacion;
				provincia=_provincia;
				inauguracion=_inauguracion;
				premios=_premios;

}
