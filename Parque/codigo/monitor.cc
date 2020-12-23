/*
 * monitor.cc
 *
 *  Created on: 11 dic. 2020
 *      Author: Jesús
 */

#include "../codigo/monitor.h"

using namespace std;

monitor :: monitor(string dNi="",string name="", string surname="",int telefono=0,string Uaddress="", string email="",string birthdate="",
float nomina, list<ruta> ruta, list<visitante> visitantes,bool ausente):
Persona(dNi, name, surname, age, Uaddress,  local, prov, Upais){
    nomin=nomina;
    rut=ruta;
    visit=visitantes;
    ausent=ausente;
}

list<ruta> monitor::crearRuta(ruta p1){
    int longit;
    cin<<longit;
    p1.setLongitud(longit);
    string rec;
    cin<<rec;
    p1.setRecorrido(rec);
    int tiem;
    cin<<tiem;
    p1.setTiempo(tiem);
    string jor;
    cin<<jor;
    p1.setJornada(jor);
    string pai;
    cin<<pai;
    p1.setPaisaje(pai);
    string trans;
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
    return true;
}

bool deleteRuta(){if() return true; else return false;}
bool modRuta(ruta p1, ruta p2){if() return true; else return false;}
bool reportError(){if() return true; else return false;}
void addRuta(ruta ruta){ ;}
bool comprobarAusencia(){if() return true; else return false;}
void apuntarAusencia(bool p1){ ;}
void buscarRuta(string p1){ ;}
