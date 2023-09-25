#pragma once
#include <iostream>
#include <string>
using namespace std;
using namespace System;
#define colours Console::ForegroundColor = ConsoleColor

void cursor(int x, int y)
{
	Console::SetCursorPosition(x, y);
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
	colours::White;
	cursor(40, 6); cout << "Nombre: ";
	getline(cin, Nombre);  //ingresar Nombre
	return Nombre;
}
string GeneroPersona() {
	int Opc;
	system("cls");
	colours::Cyan;
	cursor(53, 2);
	cout << "CREAR CUENTA GMAIL" << endl;
	colours::Red;
	cursor(40, 6); cout << "Nombre: " << Nombre;
	colours::White;
	cursor(20, 8); cout << "1. Hombre | 2. Mujer | 3. Sin especificar";
	cout << "\t    Ingrese la opcion: ";
	colours::Gray;  cin >> Opc;
	if (Opc == 1) Sexo = "Hombre";
	else if (Opc == 2) Sexo = "Mujer";
	else Sexo = "No_Definido";
	return Sexo;
}

int NumeroPersona() {
	system("cls");
	colours::Cyan;
	cursor(53, 2);
	cout << "CREAR CUENTA GMAIL" << endl;
	colours::Red;
	cursor(40, 6); cout << "Nombre: " << Nombre;
	cursor(40, 8); cout << "Genero: " << Sexo;
	colours::White;
	cursor(40, 10); cout << "Telefono: ";
	colours::Gray; cin >> Numero_Tel;     //Ingresar Numero de telefono
	return Numero_Tel;
}

string CorreoPersona() {
	system("cls");
	colours::Cyan;
	cursor(53, 2);
	cout << "CREAR CUENTA GMAIL" << endl;
	colours::Red;
	cursor(40, 6); cout << "Nombre: " << Nombre;
	cursor(40, 8); cout << "Genero: " << Sexo;
	cursor(40, 10); cout << "Telefono: " << Numero_Tel;
	colours::White;
	cursor(40, 12);	cout << "Nuevo correo electronico(sin @): ";
	cursor(104, 12); cout << "@gmail.com";
	cursor(75, 12);
	colours::Gray;  cin >> Correo;
	return Correo;                                                  //Ingresar una nueva correo electrónico
}

string ClavePersona() {
	system("cls");
	colours::Cyan;
	cursor(53, 2);
	cout << "CREAR CUENTA GMAIL" << endl;
	colours::Red;
	cursor(40, 6); cout << "Nombre: " << Nombre;
	cursor(40, 8); cout << "Genero: " << Sexo;
	cursor(40, 10); cout << "Telefono: " << Numero_Tel;
	cursor(40, 12);	cout << "Nuevo correo electronico: " << Correo << "@gmail.com";
	colours::White;
	cursor(40, 14); cout << "Contrase" << char(164) << "a: "; colours::Gray; cin >> Clave;   //Ingresar clave sea digitos o numeros
	ofstream archivo;
	archivo.open("correoinscrito.txt", ios::out);
	archivo << Correo << "@gmail.com:"<<Clave;
	return Clave;
}
void Crear_Cuenta() {
	colours::Cyan;
	cursor(53, 2);
	cout << "CREAR CUENTA GMAIL" << endl;
}


void EscribirCuenta(string Clave) {
	ofstream archivo;
	archivo.open("correoinscrito.txt", ios::out);
	archivo << Clave << "@gmail.com:"<<Clave;
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
