#pragma once
#include <iostream>
#include <algorithm>
#include <functional>
#include <string>
using namespace std;
using namespace System;

//Random de Nombres para generar aleatoria
string Nombres[] = { "Juan Perez", "Paolo Guerrero", "Mark Raimondi", "Diego Florez", "Javier Cuellar", "Maria Flores",
"Lizbeth Olivera", "Teresa Alvarez", "Angel Di María" };

class Persona {  //Crearmos una clase persona
private:
	string Nombre;  // Atributos de la clase persona
	string Correo;	// Atributos de la clase persona
	string Sexo;	// Atributos de la clase persona
	int Numero_Tel;	// Atributos de la clase persona
	string Clave;	// Atributos de la clase persona
public:
	Persona(string Nombre, string Sexo, int Numero_Tel, string Correo, string Clave) {
		this->Nombre = Nombre;            //Obtenemos datos
		this->Sexo = Sexo;				  //Obtenemos datos
		this->Numero_Tel = Numero_Tel;	  //Obtenemos datos
		this->Correo = Correo;			  //Obtenemos datos
		this->Clave = Clave;			  //Obtenemos datos
	}
	
	string ObtenerNombre() {
		return Nombre;
	}
	string ObtenerCorreo() {
		return Correo;
	}
	string ObtenerSexo() {
		return Sexo;
	}
	int ObtenerNumero_Tel() {
		return Numero_Tel;
	}
	string ObtenerClave() {
		return Clave;
	}

	//GET ----------------------
	string getNombre() {
		return Nombre;
	}
	string getCorreo() {
		return Correo;
	}
	string getSexo() {
		return Sexo;
	}
	int getNumero_Tel() {
		return Numero_Tel;
	}
	string getClave() {
		return Clave;
	}
	//GET   Fynaly ______________________________________
};