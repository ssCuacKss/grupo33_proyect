#include "ruta.h"

ruta::ruta(int _longitud,string _recorrido,int _tiempo,int _jornada,string _paisaje,int _transporte,int _aforo,
		int _dificultad,string _nombre)
{
	longitud=_longitud;
	recorrido=_recorrido;
	tiempo=_tiempo;
	paisaje=_paisaje;
	tipoJornada=_jornada;
	transporte=_transporte;
	aforo=_aforo;
	dificultad=_dificultad;
	nombre=_nombre;
	//Escritura en rutas
    ofstream archivo_salida;
        archivo_salida.open(localizacion+"_rutas.txt");
        if (archivo_salida.fail()) cout<< "El archivo no se abrio correctamente"<<endl;
        for(list<ruta>::iterator i=rutas.begin(); i<10;i++){
            while(archivo_salida!='\n'){
            archivo_salida<<i->getRecorrido() + "-";
            archivo_salida<<i->getLongitud() + "-";
            archivo_salida<<i->getTiempo() + "-";
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
