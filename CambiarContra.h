#pragma once
#include<iostream>
#include <string.h>
#include <stdlib.h>
#include <fstream>
#include <conio.h>
using namespace std;
using namespace System;

int CambiaContra(string AccesoCorreo, string ContraCorreo) {
	string iniciosesion = AccesoCorreo + ":" + ContraCorreo;
	ifstream archivo;
	string texto;
	bool iniciosesioncorrecto = 1;
	archivo.open("correoinscrito.txt", ios::in);
	getline(archivo, texto);
	if (texto != iniciosesion) {
		Console::SetCursorPosition(15, 21); colours::Red;
		cout << "EMAIL y/o CONTRASEÑA INCORRECTOS";
		Console::SetCursorPosition(15, 22);
		cout << "Presiona cualquier tecla para reintentar";
		_getch();
		iniciosesioncorrecto = 0;
	}
	return iniciosesioncorrecto;
}

void CambioContra(string AccesoCorreo) {
	string contra, confirmarcontra;
	colours::Red;
	Console::SetCursorPosition(40, 3); cout << char(201) << char(205) << char(205) << char(205) << char(205);
	Console::SetCursorPosition(40, 4); cout << char(186);
	Console::SetCursorPosition(40, 5); cout << char(186);
	Console::SetCursorPosition(40, 6); cout << char(186) << "   " << char(205) << char(187);
	Console::SetCursorPosition(40, 7); cout << char(186) << "    " << char(186);
	Console::SetCursorPosition(40, 8); cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(188);
	colours::White;
	Console::SetCursorPosition(49, 5); cout << char(201) << char(205) << char(187) << char(201) << char(205) << char(187);
	Console::SetCursorPosition(49, 6); cout << char(186) << " " << char(200) << char(188) << " " << char(186);
	Console::SetCursorPosition(49, 7); cout << char(186) << "    " << char(186);
	Console::SetCursorPosition(49, 8); cout << char(186) << "    " << char(186);
	Console::SetCursorPosition(57, 5); cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(187);
	Console::SetCursorPosition(57, 6); cout << char(186) << "    " << char(186);
	Console::SetCursorPosition(57, 7); cout << char(186) << char(205) << char(205) << char(205) << char(205) << char(186);
	Console::SetCursorPosition(57, 8); cout << char(186) << "    " << char(186);
	Console::SetCursorPosition(65, 5); cout << char(186);
	Console::SetCursorPosition(65, 6); cout << char(186);
	Console::SetCursorPosition(65, 7); cout << char(186);
	Console::SetCursorPosition(65, 8); cout << char(186);
	Console::SetCursorPosition(68, 5); cout << char(186);
	Console::SetCursorPosition(68, 6); cout << char(186);
	Console::SetCursorPosition(68, 7); cout << char(186);
	Console::SetCursorPosition(68, 8); cout << char(200) << char(205) << char(205) << char(205) << char(205);
	colours::Gray;
	do {
		Console::SetCursorPosition(35, 14); cout << "Contrase" << char(164) << "a: "; cin >> contra;
		Console::SetCursorPosition(29, 17); cout << "Nueva Contrase" << char(164) << "a: "; cin >> confirmarcontra;
		if (contra != confirmarcontra) {
			Console::SetCursorPosition(19, 19); colours::Red; cout << "Las contrase" << char(164) << "as no coinciden.";
			Console::SetCursorPosition(29, 20); colours::Red; cout << "Presiona cualquier tecla para reintentar.";
		}
	} while (contra != confirmarcontra);
	ofstream archivo;
	archivo.open("correoinscrito.txt", ios::out);
	archivo << AccesoCorreo << "@gmail.com:" << contra;
}