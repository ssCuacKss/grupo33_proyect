
#ifndef persona_h
#define persona_h
#include<iostream>
#include<string>
using namespace std;
class Persona{
	private:
		string nombre_;
		string apellidos_;
		string dni_;
		string direccion_;
		string email_;
		string birthdate_;
		int telefono_;
	public:
		Persona(string dNi="",string name="", string surname="",int telefono=0,string Uaddress="", string email="",string birthdate="");
		string getNombre(){return nombre_;};
		string getApellidos(){return apellidos_;};
		string getDNI(){return dni_;};
		string getDireccion(){return direccion_;};
		string getBirthdate(){return birthdate_;};
		string getEmail(){return email_;};
		int getTelefono(){return telefono_;};
		void setNombre(string name){nombre_=name;};
		void setApellidos(string apellidos){apellidos_=apellidos;};
		void setDNI(string dni){dni_=dni;};
		bool setTelefono(int telefono){if((telefono>100000000)&&(telefono<1000000000)){telefono_=telefono;return true;}else{return false;}};
		void setDireccion(string Uaddress){direccion_=Uaddress;};
		void setBirthdate(string birthdate){birthdate_=birthdate;};
		void setEmail(string email){email_=email;};
};
#endif
