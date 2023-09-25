#pragma once
#include <iostream>
#define colours Console::ForegroundColor = ConsoleColor
using namespace System;
using namespace std;
int Menu() {
	int opcion;
	colours::DarkMagenta;
	cout << "\n\n\t\t   ========================================";
	cout << "\n\t\t   Bienvenidos a Generar cuentas aleatorias";
	cout << "\n\t\t   ========================================";
	colours::Gray;
	cout << "\n\n\t\t\t1. Crear cuentas aleatorias" << endl;
	cout << "\t\t\t2. Mostrar Cuentas aleatorias" << endl;
	cout << "\t\t\t3. Realizar OrdenamientoSeleccion" << endl;
	cout << "\t\t\t4. Mostrar Cuentas ordenadas" << endl;
	cout << "\t\t\t5. Salir" << endl << endl;
	colours::Green;
	do {
		cout << "\n\t\t\tIngrese la opcion: ";
		colours::Cyan;
		cin >> opcion;
	} while (opcion < 1 || opcion > 5);
	cin.ignore();
	system("cls");
	return opcion;
}

int opcion01() {
	int n;
	colours::Green;
	cout << "\a\n\n\n\n\t\tIngrese la cantidad de correos a generar: ";
	colours::Cyan; cout << ">> ";
	cin >> n; cin.ignore(); cout << endl << endl;

	return n;
}

void Confirma_Final() {
	cout << "\a\n\n\n\n\t\tLos correos aleatorios se guardaron correctamente" << endl;
	cin.ignore();
	system("cls");
}