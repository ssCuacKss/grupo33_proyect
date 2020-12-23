/*
 * parque.cc
 *
 *  Created on: 10 dic. 2020
 *      Author: Jesús
 */

#include"parque.h"

parque::parque(string _localizacion, string _provincia, int _superficie, string _inauguracion,list<string> _premios, string _fecha)
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
		archivo_entrada.open(localizacion+"_rutas.txt");
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



								string dNix;
								string namex;
								string surnamex;
								int agex;
								float nominx;
								string Uaddresx;
								string emailx;
								string birthdatex;
	//visitantes
				bool discapacidadx;
				bool grupox;
				string rutax;
		ifstream archivo_entrada;
				archivo_entrada.open(localizacion+"_visitantes.txt");
				if (archivo_entrada.fail()) cout<< "El archivo no se abrio correctamente"<<endl;
				for(list<visitante>::iterator i=visitantes.begin(); i<10;i++){
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
						archivo_entrada>>emailx;
						i->setDireccion(emailx);
						archivo_entrada>>birthdatex;
						i->setDireccion(birthdatex);
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

								ifstream archivo_entrada;
								archivo_entrada.open(localizacion+"_monitores.txt");
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
										archivo_entrada>>emailx;
										i->setDireccion(emailx);
										archivo_entrada>>birthdatex;
										i->setDireccion(birthdatex);
										}
								}
								archivo_entrada.close();
	//admins


								archivo_entrada.close();
								ifstream archivo_entrada;
								archivo_entrada.open(localizacion+"_admin.txt");
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
										archivo_entrada>>nominx;
										i->setNomina(nominx);
										archivo_entrada>>Uaddresx;
										i->setDireccion(Uaddresx);
										archivo_entrada>>emailx;
										i->setDireccion(emailx);
										archivo_entrada>>birthdatex;
										i->setDireccion(birthdatex);
										}
									}
								archivo_entrada.close();


	//cuentas
								string correox;
								string passwordx;
								bool permisox;
								string aux;
								archivo_entrada.close();
								ifstream archivo_entrada;
								archivo_entrada.open(localizacion+"_cuentas.txt");
								if (archivo_entrada.fail()) cout<< "El archivo no se abrio correctamente"<<endl;
								for(list<Cuenta>::iterator i=cuentas.begin(); i<10;i++){
									while(archivo_entrada!='\n'){
										archivo_entrada>>correox;
										aux=correox;
										archivo_entrada>>passwordx;
										i->setAccount(aux, passwordx);
										archivo_entrada>>permisox;
										i->setPermission(permisox);
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
void parque::setPremios(_premios){
	int cont=1
	int aux=0;
	string premio;
	if(_premios==premios){
		for(int i=0;i<cont; i++){
			cout<<"indique el nombre del premio recibido"<<endl;
			cin>>premio;
			setPremio(premio);
			cout<<"escriba 1 para añadir otro premio"<<endl;
			cin>>aux;
			if(aux==1) cont++;
			aux=0;
		}
	}
	else{
		cout<<"ista de premios no asociada al parque o iexistente"<<endl;
	}

}


















