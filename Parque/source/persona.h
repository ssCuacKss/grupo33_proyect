#ifndef persona_h
#define persona_h
#include<iostream>
#include<string>
using namespace std;
class Persona{
	private:
		string nombre;
		string apellidos;
		string dni;
		string direccion;
		string localidad;
		string provincia;
		string pais;
		int edad;
	public:
		Persona(string dNi,string name="", string surname="",int age=0,string Uaddress="", string local="",string prov="",string Upais="");
		string getNombre(){return nombre;};
		string getApellidos(){return apellidos;};
		string getDNI(){return dni;};
		string getDireccion(){return direccion;};
		string getLocalidad(){return localidad;};
		string getProvincia(){return provincia;};
		string getPais(){return pais;};
		string getApellidosyNombre(){return apellidos+", "+nombre;};
		bool mayor(){if(edad>=18){return true;}else{return false;}}
		int getEdad(){return edad;};
		void setNombre(string Uname){nombre=Uname;};
		void setApellidos(string Usub){apellidos=Usub;};
		void setDNI(string Udni){dni=Udni;};
		bool setEdad(int Uage){if(Uage>=0){edad=Uage;return true;}else{return false;}};
		void setDireccion(string Uaddress){direccion=Uaddress;};
		void setLocalidad(string local){localidad=local;};
		void setProvincia(string prov){provincia=prov;};
		void setPais(string Upais){pais=Upais;};
};
#endif
