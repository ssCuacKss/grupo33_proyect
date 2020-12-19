#include <string>
using namespace std;
#include"persona.h"
Persona::Persona(string dni,string name, string surname,int telefono,string direccion, string email,string birthdate){
	nombre_=name;
	apellidos_=surname;
	dni_=dni;
	telefono_=telefono;
	direccion_=direccion;
	email_=email;
	birthdate_=birthdate;
}
