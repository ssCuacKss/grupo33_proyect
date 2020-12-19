/*
 * parque.cc
 *
 *  Created on: 10 dic. 2020
 *      Author: Jesús
 */

#include"parque.h"

parque::parque(string _localizacion, string _provincia, int _superficie, string _inauguracion,list<string> _premios, list<ruta> _rutas, list<visitante> _visitantes, list<Cuenta> _cuentas, string _fecha)
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
				bool discapacidadx;
				bool grupox;
				string rutax;
		ifstream archivo_entrada;
				archivo_entrada.open(localizacion+"visitantes.txt");
				if (archivo_entrada.fail()) cout<< "El archivo no se abrio correctamente"<<endl;
				for(list<visitante>::iterator i=visitantes.begin(); i<10;i++){
					while(archivo_entrada!='\n'){
								archivo_entrada>>discapacidadx;
								i->setDisable(discapacidadx);
								archivo_entrada>>grupox;
								i->setGrupo(grupox);
								archivo_entrada>>rutax;
								i->setruta(rutax);
							}
				}
				archivo_entrada.close();

	//monitores
						string dNix;
						string namex;
						string surnamex;
						int agex;
						float nominx;
						string Uaddresx;
						string localx;
						string provx;
						string Upaisx;
						bool ausentex;

								ifstream archivo_entrada;
								archivo_entrada.open(localizacion+"monitores.txt");
								if (archivo_entrada.fail()) cout<< "El archivo no se abrio correctamente"<<endl;
								for(list<monitor>::iterator i=monitores.begin(); i<10;i++){
									while(archivo_entrada!='\n'){
										archivo_entrada>>dNix;
										i->setDNI(dNix);
										archivo_entrada>>namex;
										i->setNombre(namex);
										archivo_entrada>>surnamex;
										i->setApellidos(surnamex);
										archivo_entrada>>agex;
										i->setEdad(agex);
										archivo_entrada>>nominx;
										i->setNomina(nominx);
										archivo_entrada>>Uaddresx;
										i->setDireccion(Uaddresx);
										archivo_entrada>>localx;
										i->setLocalidad(localx);
										archivo_entrada>>provx;
										i->setProvincia(provx);
										archivo_entrada>>Upaisx;
										i->setPais(Upaisx);
										archivo_entrada>>ausentex;
										i->apuntarAusencia(ausentex);
										}
								}
	//admins


								archivo_entrada.close();
								ifstream archivo_entrada;
								archivo_entrada.open(localizacion+"admin.txt");
								if (archivo_entrada.fail()) cout<< "El archivo no se abrio correctamente"<<endl;
								for(list<admin>::iterator i=admins.begin(); i<10;i++){
									while(archivo_entrada!='\n'){
										archivo_entrada>>dNix;
										i->setDNI(dNix);
										archivo_entrada>>namex;
										i->setNombre(namex);
										archivo_entrada>>surnamex;
										i->setApellidos(surnamex);
										archivo_entrada>>agex;
										i->setEdad(agex);
										archivo_entrada>>Uaddresx;
										i->setDireccion(Uaddresx);
										archivo_entrada>>localx;
										i->setLocalidad(localx);
										archivo_entrada>>provx;
										i->setProvincia(provx);
										archivo_entrada>>Upaisx;
										i->setPais(Upaisx);

									}
								}
								archivo_entrada.close();
				localizacion=_localizacion;
				provincia=_provincia;
				inauguracion=_inauguracion;
				premios=_premios;
				superficie=_superficie;
				fecha=_fecha;

}



















