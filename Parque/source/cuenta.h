/*
 * cuenta.h
 *
 *  Created on: 10 dic. 2020
 *      Author: Jesús
 */

#ifndef SOURCE_CUENTA_H_
#define SOURCE_CUENTA_H_

#ifndef CUENTA_H_
#define CUENTA_H_
#include <string>
using namespace std;

class Cuenta{
private:
	string correo;
	string password;
	bool permiso;
public:
	Cuenta(string jobEmail, string contrasena, int permissionLevel);
	inline void setPermission(string p1){if(p1=="admin") permiso=true; else if(p1=="monitor") permiso=false;}
	inline int getpermission(){return permiso;}
	inline void setAccount(string mail, string password_){correo=mail; password=password_;}
	inline bool inicioSesion(string mail, string password_){if((mail==correo) && (password_=password)) return true; return false;}
};

#endif /* CUENTA_H_ */



#endif /* SOURCE_CUENTA_H_ */

