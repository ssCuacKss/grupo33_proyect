/*
 * visitante.cc
 *
 *  Created on: 9 dic. 2020
 *      Author: Jesús
 */

#include "../codigo/visitante.h"

visitante::visitante(string dni,string name, string surname,int telefono,string direccion, string email,string birthdate,
bool _discapacidad=false, bool _grupo=false, string _ruta) : Persona(dNi, name, surname, telefono, direccion,  email, birthdate)
{
discapacidad= _discapacidad;
grupo= _grupo;
ruta.nombre= _ruta;
//Escritura en archivo
ofstream archivo_salida;
        archivo_salida.open(localizacion+"_visitantes.txt");
        if (archivo_salida.fail()) cout<< "El archivo no se abrio correctamente"<<endl;
        for(list<ruta>::iterator i=rutas.begin(); i<10;i++){
            while(archivo_salida!='\n'){
            archivo_salida<<i->getRecorrido() + "-";
            archivo_salida<<i->getLongitud() + "-";
            archivo_salida<<i->getTiempo();
            archivo_salida<<i->get() + "-";
            archivo_salida<<i->getPaisaje() + "-";
            archivo_salida<<i->getJornada() + "-";
            archivo_salida<<i->getTransporte() + "-";
            archivo_salida<<i->getAforo() + "-";
            archivo_salida<<i->getDificultad() + "-";
            archivo_salida<<i->getNombre();
            }
        }
        archivo_salida.close();
    }
}



