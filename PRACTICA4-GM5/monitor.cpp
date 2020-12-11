#include "monitor.h"
using namespace std;

monitor :: monitor(string dNi,string name="", string surname="",int age=0,string Uaddress="", string local="",string prov="",string Upais="",
float nomina, list<ruta> ruta, list<visitante> visitantes,bool ausente):
Persona(dNi, name, surname, age, Uaddress,  local, prov, Upais){
    nomin=nomina;
    rut=ruta;
    visit=visitantes;
    ausent=ausente;
}
list<ruta> monitor:: crearRuta(ruta p1){
    int longit;
    cin<<longit;
    p1.setLongitud(longit);
    string rec;
    cin<<rec;
    p1.setRecorrido(rec);
    int tiem;
    cin<<tiem;
    p1.setTiempo(tiem);
    int jor;
    cin<<jor;
    p1.setJornada(jor);
    string pai;
    cin<<pai;
    p1.setPaisaje(pai);
    int trans;
    cin<<trans;
    p1.setTransporte(trans);
    int af;
    cin<<af;
    p1.setAforo(af);
    int dif;
    cin<<dif;
    p1.setDificultad(dif);
    string nomb;
    cin<<nomb;
    p1.setNombre(nomb);
    rut.push_back(p1);
    return p1;
}

void monitor:: buscar_eliminar_Ruta(string p1){
	list<ruta> :: iterator i;
	for(i=rut.begin();i==p1;){
		i++;
	}
	if(i==p1){
		rut.erase(i);
	}
}

bool monitor:: modRuta(string p1){
	list<ruta> :: iterator i;
	for(i=rut.begin();i==p1;){
		i++;
	}
	if(i->nombre==p1){
			int longit;
		    cin<<longit;
		    i->setLongitud(longit);
		    string rec;
		    cin<<rec;
		    i->setRecorrido(rec);
		    int tiem;
		    cin<<tiem;
		    i->setTiempo(tiem);
		    int jor;
		    cin<<jor;
		    i->setJornada(jor);
		    string pai;
		    cin<<pai;
		    i->setPaisaje(pai);
		    int trans;
		    cin<<trans;
		    i->setTransporte(trans);
		    int af;
		    cin<<af;
		    i->setAforo(af);
		    int dif;
		    cin<<dif;
		    i->setDificultad(dif);
		    string nomb;
		    cin<<nomb;
		    i->setNombre(nomb);
			return true;
	}
	return false;
}

void monitor:: reportError(){
	incidencia p;
	cout<<"Introduzca un nombre para la incidencia"<<endl;
	cin<<p.nombre;
	cout<<"Introduzca una descripcion de la incidencia"<<endl;
	cin<<p.contenido;
	cout<<"Introduzca la fecha en la que se ha producido la incidencia"<<endl;
	cin<<p.fecha_creada;
	cout<<"Introduzca su nombre"<<endl;
	cin<<p.monitor_nombre;
}
