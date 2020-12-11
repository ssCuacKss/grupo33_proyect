#ifndef MONITOR_H
#define MONITOR_H
#include <string>
#include <list>
#include "persona.h"
#include "ruta.h"
#include "visitante.h"
using namespace std;

struct incidencia{
	string nombre;
	string contenido[500];
	string fecha_creada;
	string monitor_nombre;
};

class monitor : public Persona{
    private:
        float nomin;
        list<ruta> rut;
        list<visitante> visit;
        bool ausent;
        list<incidencia> incidencia_;
    public:
        monitor(string dNi,string name="", string surname="",
        int age=0,string Uaddress="", string local="",string prov="",string Upais="",
        float nomina, list<ruta> ruta, list<visitante> visitantes,bool ausente);

        inline void setNomina(float nomina){nomina=nomin;}
        inline float getNomina(){return nomin;}
        inline ruta getRuta(){return rut;}

        list<ruta> crearRuta(ruta p1);
        void buscar_eliminar_Ruta(string p1);
        bool modRuta(string p1);
        void reportError();
        void apuntarAusencia(bool p1){ausent=p1;}
        inline bool comprobarAusencia(){if(ausent==true)return true; return false;}

};

#endif
