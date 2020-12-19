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

	ifstream archivo_entrada;
		vector<string> variable;
		archivo_entrada.open(localizacion+"rutas.txt");
		if (archivo_entrada.fail()) cout<< "El archivo no se abrio correctamente"<<endl;
		for(list<ruta>::iterator i=rutas.begin(); i<10;i++){
			vector<string>::iterator j;
			for(j=variable.begin(); j!='\n' ; j++){
				getline(archivo_entrada, *j, ',');
			}
			char a[] = *variable.begin();
			int longi= atoi(a);
			i->setLongitud(longi);
			i->setRecorrido(*variable.begin()+1);
			char t[]= *variable.begin()+2;
			int time=atoi(t);
			i->setTiempo(time);
			i->setJornada(*variable.begin()+3);
			i->setPaisaje(*variable.begin()+4);
			i->setTransporte(*variable.begin()+5);
			char c[] = *variable.begin()+6;
			int af= atoi(c);
			i->setAforo(af);
			char b[] = *variable.begin()+7;
			int dif= atoi(b);
			i->setDificultad(dif);
			i->setNombre(*variable.begin()+9);
		}
		archivo_entrada.close();
	//visitantes




		localizacion=_localizacion;
				provincia=_provincia;
				inauguracion=_inauguracion;
				premios=_premios;

}





