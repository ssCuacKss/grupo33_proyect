
#include "admin.h"

#define MAX 255

	admin::admin(string dNi="",string name="", string surname="",int telefono=0,string Uaddress="", string email="",string birthdate="", int permiso=1)
	:Persona(dNi, name, surname, telefono, Uaddress, email, birthdate)
	{
		leeMonitores();
		leeAdmin();			//En el constructor se cargan las
		leeVisitantes();			//listas con los datos de los ficheros
		leeRutas();
	}

	void admin::leeMonitores()
	{
		monitores.clear();
		std::fstream f;
		f.open("monitores.txt",std::ifstream::in);
		if(f.is_open())
		{
			char dni[MAX],nombre[MAX],apellidos[MAX],telefono[MAX],direccion[MAX],nomina[MAX],email[MAX],birthdate[MAX],ausente[MAX];
			while(!f.eof())
			{
				f.getline(dni,MAX,'/n');
				f.getline(nombre, MAX,'/n');
				f.getline(apellidos,MAX,'/n');
				f.getline(telefono,MAX,'/n');
				f.getline(direccion,MAX,'/n');
				f.getline(nomina,MAX,'/n');
				f.getline(email,MAX,'/n');
				f.getline(birthdate,MAX,'/n');
				f.getline(ausente,MAX,'/n');
			}
			bool ausent;
			if(ausente ==  "true") ausent= true;
			else ausent=false;
			monitor aux(dni, nombre,apellidos,atoi(telefono),direccion,email,birthdate, atof(nomina),ausent); //ausente tipo Bool
			monitores.push_back(aux);
		}
	}
	void admin::setMonitores ()    //actualiza el fichero
	{
		list<monitor>::iterator it;
		std::ofstream f;
		f.open("monitores.txt", std::ofstream::out | std::ofstream::trunc); // trunc elimina el contenido anterior del fichero
		if(f.is_open())
		{
			for(it=monitores.begin();it!=monitores.end();it++)
			{
				f<<(*it).getDNI()+'/n'+(*it).getNombre()+'/n'+(*it).getApellidos()+(*it).getTelefono()+'/n'
					+(*it).getDireccion()+'/n'+(*it).getEmail()+'/n'+(*it).getBirthdate()+'/n'+'/n';
			}
			f.close();
		}else{
			std::cout<<"error al abrir el fichero";
		}
	}
	bool admin::addMonitores(monitor _monitor)   //añade a la lista un monitor
	{
		list<monitor>::iterator it;
		for(it=monitores.begin();it!=monitores.end();it++)
		{
			if((*it).getDNI==_monitor.getDNI){
				std::cout<<"Ya se encuentra en la lista\n";
				return false;
			}
		}
		monitores.push_back(_monitor);
		return true;
		// si se quiere meter en el fichero poner setMonitores();
	}
	bool admin::delMonitores(monitor _monitor)
	{
		list<monitor>::iterator it;
		for(it=monitores.begin();it!=monitores.end();it++)
			{
				if((*it).getDNI==_monitor.getDNI)
				{
					monitores.erase(it);
					std::cout<<"monitor eliminado de la lista\n";
					return true;
				}
			}
		std::cout<<"no se ha encontrado monitor\n";
		return false;
	}
	void admin::leeVisitantes()
		{
		visitantes.clear();
		std::fstream f;
		f.open("visitantes.txt",std::ifstream::in);
		if(f.is_open())
		{
			char dni[MAX],nombre[MAX],apellidos[MAX],telefono[MAX],direccion[MAX],email[MAX],birthdate[MAX],
			disable[MAX],grupo[MAX],ruta[MAX];
			while(f.getline(dni,MAX,'/n'))
			{
				f.getline(nombre,MAX,'/n');
				f.getline(apellidos,MAX,'/n');
				f.getline(telefono,MAX,'/n');
				f.getline(direccion,MAX,'/n');
				f.getline(email,MAX,'/n');
				f.getline(birthdate,MAX,'/n');
				f.getline(disable,MAX,'/n');
				f.getline(grupo,MAX,'/n');
				f.getline(ruta,MAX,'/n');
			}
			visitante aux(dni, nombre,apellidos,atoi(telefono),direccion,email,birthdate,disable,grupo,ruta);  //disable y grupo son bool y ruta es tipo ruta
			visitantes.push_back(aux);
		}else{
			std::cout<<"error al abrir fichero";
		}
	}
	void admin::setVisitantes()
	{
		list<visitante>::iterator it;
		std::ofstream f;
		f.open("SierraNevadavisitantes.txt", std::ofstream::out | std::ofstream::trunc); // trunc elimina el contenido anterior del fichero
		if(f.is_open())
		{
			for(it=visitantes.begin();it!=visitantes.end();it++)
			{
				f<<(*it).getDNI()+'/n'+(*it).getNombre()+'/n'+(*it).getApellidos()+(*it).getTelefono()+'/n'
					+(*it).getDireccion()+'/n'+(*it).getEmail()+'/n'+(*it).getBirthdate()+'/n'
					+(*it).getDisable()+'/n'+(*it).getGrupo+"n"+(*it).getruta()+'/n';
			}
			f.close();
		}else{
			std::cout<<"error al abrir el fichero";
		}
	}
	bool admin::addVisitante(visitante _visitante)
	{
		list<visitante>::iterator it;
		for(it=visitantes.begin();it!=visitantes.end();it++)
		{
			if((*it).getDNI==_visitante.getDNI){
				std::cout<<"Ya se encuentra en la lista\n";
				return false;
			}
		}
		visitantes.push_back(_visitante);
		return true;
		// si se quiere meter en el fichero poner setVisitantes()
	}
	bool admin::delVisitantes(visitante _visitante)
	{
		list<visitante>::iterator it;
		for(it=visitantes.begin();it!=visitantes.end();it++)
		{
			if((*it).getDNI==_visitante.getDNI)
			{
				visitantes.erase(it);
				std::cout<<"visitante eliminado de la lista\n";
				return true;
			}
		}
	std::cout<<"no se ha encontrado visitante\n";
	return false;
	}
	visitante admin::findVisitante(string _dni)
	{
		list<visitante>::iterator it;
		for(it=visitantes.begin();it!=visitantes.end();it++)
		{
			if((*it).getDNI==_dni)
			{
				return (*it);
			}
		}
	std::cout<<"no se ha encontrado visitante\n";
	visitante vacio;
	return vacio;
	}
	visitante admin::findVisitante(string _name,string _surname)
	{
		list<visitante>::iterator it;
		for(it=visitantes.begin();it!=visitantes.end();it++)
		{
			if(((*it).getNombre==_name) && ((*it).getApellidos==_surname))
			{
				return (*it);
			}
		}
	std::cout<<"no se ha encontrado visitante\n";
	visitante vacio;
	return vacio;
	}
	monitor admin::findMonitor(string _dni)
	{
		list<monitor>::iterator it;
		for(it=monitores.begin();it!=monitores.end();it++)
			{
				if((*it).getDNI==_dni)
				{
					return(*it);
				}
			}
		std::cout<<"no se ha encontrado monitor\n";
		monitor vacio;
		return vacio;
	}
	admin admin::findAdmin(string _dni)
	{
		list<admin>::iterator it;
		for(it=administradores.begin();it!=administradores.end();it++)
		{
			if((*it).getDNI==_dni)
			{
				return(*it);
			}
		}
		std::cout<<"no se ha encontrado administrador\n";
		admin vacio;
		return vacio;
	}
	void admin::leeRutas()
	{
		rutas.clear();
		std::fstream f;
		f.open("rutas.txt",std::ifstream::in);
		if(f.is_open())
		{
			char longitud[MAX],recorrido[MAX],tiempo[MAX],jornada[MAX],paisaje[MAX],transporte[MAX],aforo[MAX],dificultad[MAX],nombre[MAX];
			while(f.getline(longitud,MAX,'/n'))
			{
				f.getline(recorrido,MAX,'/n');
				f.getline(tiempo,MAX,'/n');
				f.getline(jornada,MAX,'/n');
				f.getline(paisaje,MAX,'/n');
				f.getline(transporte,MAX,'/n');
				f.getline(aforo,MAX,'/n');
				f.getline(dificultad,MAX,'/n');
				f.getline(nombre,MAX,'/n');
			}
			ruta aux(stoi(longitud),recorrido,stoi(tiempo),stoi(jornada),paisaje,stoi(transporte),stoi(aforo),stoi(dificultad),nombre);
			rutas.push_back(aux);
		}
	}z
	void admin::leeAdmin()
	{
		administradores.clear();
		std::fstream f;
		f.open("administradores.txt",std::ifstream::in);
		if(f.is_open())
		{
			char dni[MAX],nombre[MAX],apellidos[MAX],telefono[MAX],direccion[MAX],email[MAX],birthdate[MAX];
			while(f.getline(dni,MAX,'/n'))
			{
				f.getline(nombre,MAX,'/n');
				f.getline(apellidos,MAX,'/n');
				f.getline(telefono,MAX,'/n');
				f.getline(direccion,MAX,'/n');
				f.getline(email,MAX,'/n');
				f.getline(birthdate,MAX,'/n');
			}
			admin aux(dni, nombre,apellidos,atoi(telefono),direccion,email,birthdate, 1); //
			administradores.push_back(aux);
		}
	}
	void admin::setRutas(list <ruta> _rutas)
	{
		list<ruta>::iterator it;
		std::ofstream f;
		f.open("rutas.txt", std::ofstream::out | std::ofstream::trunc); // trunc elimina el contenido anterior del fichero
		if(f.is_open())
		{
			for(it=rutas.begin();it!=rutas.end();it++)
			{
				f<<(*it).getLongitud()+'/n'+(*it).getRecorrido()+'/n'+(*it).getTiempo()+(*it).getJornada()+'/n'
					+(*it).getPaisaje()+'/n'+(*it).getTransporte()+'/n'+(*it).getAforo()+'/n'+(*it).getDificultad+'/n'+(*it).getNombre+ '/n';
			}
			f.close();
		}else{
			std::cout<<"error al abrir el fichero";
		}
	}
	void admin::setAdmin()
	{
		list<admin>::iterator it;
		std::ofstream f;
		f.open("administradores.txt", std::ofstream::out | std::ofstream::trunc); // trunc elimina el contenido anterior del fichero
		if(f.is_open())
		{
			for(it=administradores.begin();it!=administradores.end();it++)
			{
				f<<(*it).getDNI()+'/n'+(*it).getNombre()+'/n'+(*it).getApellidos()+(*it).getTelefono()+'/n'
					+(*it).getDireccion()+'/n'+(*it).getEmail()+'/n'+(*it).getBirthdate()+'/n'+'/n';
			}
			f.close();
			}else{
			std::cout<<"error al abrir el fichero";
			}
	}
	bool admin::delAdmin(string _dni)
	{
		list<admin>::iterator it;
		for(it=administradores.begin();it!=administradores.end();it++)
		{
			if((*it).getDNI==_dni)
			{
				administradores.erase(it);
				std::cout<<"administrador eliminado de la lista\n";
				return true;
			}
		}
		std::cout<<"no se ha encontrado administrador\n";
		return false;
	}




