#pragma once
#include <iostream>
#include <string>
using namespace std;
using namespace System;
#define colours Console::ForegroundColor = ConsoleColor
void MenuInicial() {
	colours::DarkMagenta; cout << endl << endl;
	cout << "\t\t GMAIL" << endl << endl;
	colours::Gray;
	cout << "\t1. Crear cuenta nueva" << endl;
	cout << "\t2. Generar cuentas gmail aleatorias" << endl;
	cout << "\t3. Salir" << endl;
}

int OpcionInicial() {
	int Opcion;
	colours::Green;
	do {
		cout << "\n\t  Ingrese una opcion: "; cin >> Opcion;
	} while (Opcion < 1 || Opcion > 3);
	cin.ignore();
	Console::Clear();
	colours::Gray;
	return Opcion;
}
int Genero();


//Crear variable de la persona
string Nombre;
string Correo;
string Sexo;
int Numero_Tel;
string Clave;
//Finalizamos en crear variables de la persona

//INGRESAR DATOS PARA CREAR UNA NUEVA CUENTA GMAIL
string NombrePersona() {
	colours::Green;
	cout << "\n\n\t\tIngrese sus datos de manera correcta   . . . ( Dar enter )"; 
	cin.ignore(); 
	colours::DarkCyan;
	cout << "\n\tNombre: "; 
	colours::Gray;
	getline(cin, Nombre);  //ingresar Nombre
	return Nombre;
}
string GeneroPersona() {
	int Opc;
	colours::Green;
	cout << "\tGenero: " << endl;             //Seleccionar Sexo de la persona
	colours::DarkCyan;
	cout << "\t  1. Hombre" << endl;
	cout << "\t  2. Mujer" << endl;
	cout << "\t  3. Prefiero no decirlo" << endl;
	colours::Green;
	cout << "\t    Ingrese la opcion: "; 
	colours::Gray;  cin >> Opc;
	if (Opc == 1) Sexo = "Hombre";
	else if (Opc == 2) Sexo = "Mujer";
	else Sexo = "No_Defenido";
	return Sexo;
}

int NumeroPersona() {
	colours::DarkCyan;
	cout << "\tTelefono: "; 
	colours::Gray; cin >> Numero_Tel;     //Ingresar Numero de telefono
	return Numero_Tel;
}

string CorreoPersona() {
	colours::DarkCyan;
	cout << "\tNueva Correo electronico: "; colours::Gray;  cin >> Correo;
	return Correo;                                                  //Ingresar una nueva correo electrónico
}

string ClavePersona() {
	colours::DarkCyan;
	cout << "\tContraseña: "; colours::Gray; cin >> Clave;   //Ingresar clave sea digitos o numeros
	return Clave;
}
void Crear_Cuenta() {
	colours::DarkMagenta;
	cout << "\t\t\tCREAR CUENTA GMAIL" << endl;
}

void Clear();

void Finaly_Crear() {
	cin.ignore();
	colours::DarkMagenta;
	cout << "\n\n\n\t\tNueva cuenta creada satisfactoriamente" << endl << endl;
	Clear();
}


void MostrarDatos(string Nombre, string Sexo, int Numero_Tel, string Correo, string Clave) {
	colours::DarkMagenta;
	cout << "\n\t\t\tDatos del Usuario" << endl << endl;
	colours::Green;
	cout << "\tNombres: ";
	colours::Gray;
	cout << Nombre << endl;
	colours::Green;
	cout << "\tSexo: ";
	colours::Gray;
	cout << Sexo << endl;
	colours::Green;
	cout << "\tNumero de telefono: ";
	colours::Gray;
	cout << Numero_Tel << endl;
	colours::Green;
	cout << "\tNuevo Correo: ";
	colours::Gray;
	cout << Correo << endl;
	colours::Green;
	cout << "\tClave: ";
	colours::Gray;
	cout << "**********" << endl;
	colours::Gray;
}

void Clear() {
	cin.ignore();
	Console::Clear();
	colours::Gray;
}
