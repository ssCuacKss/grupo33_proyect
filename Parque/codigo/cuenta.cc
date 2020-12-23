#include "../codigo/cuenta.h"

#include <string>
using namespace std;

Cuenta:: Cuenta(string jobEmail, string contrasena, int permissionLevel){
	correo=jobEmail;
	password=contrasena;
	permiso=permissionLevel;
}




