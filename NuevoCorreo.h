#pragma once
#include <iostream>
#include <string>
using namespace std;
using namespace System;
#define colours Console::ForegroundColor = ConsoleColor

string Destinatario;
string CopiaCorreo;
string ContenidoCorreo;
string Asunto;

void InterfazNuevoMensaje(){
	Console::SetCursorPosition(5, 1); cout << char(201);
	Console::SetCursorPosition(112, 1); cout << char(187);
	for (int i = 6; i < 112; i++) {
		Console::SetCursorPosition(i, 1); //generacion base arriba
		cout << char(205);
	}
	for (int i = 6; i < 112; i++) {
		Console::SetCursorPosition(i, 27); //generacion base inferior
		cout << char(205);
	}
	for (int i = 2; i < 27; i++) {
		Console::SetCursorPosition(5, i); //generacion columna arriba
		cout << char(186);
	}
	for (int i = 2; i < 27; i++) {
		Console::SetCursorPosition(112, i); //generacion columna arriba
		cout << char(186);
	}
	for (int i = 6; i < 112; i++) {
		Console::SetCursorPosition(i, 5); //generacion fila destinatario
		cout << char(205);
	}
	for (int i = 6; i < 112; i++) {
		Console::SetCursorPosition(i, 9); //generacion fila copia correo
		cout << char(205);
	}
	for (int i = 6; i < 112; i++) {
		Console::SetCursorPosition(i, 13); //generacion fila copia correo
		cout << char(205);
	}
	for (int i = 2; i < 9; i++) {
		Console::SetCursorPosition(22, i); //generacion columna arriba
		cout << char(186);
	}
	Console::SetCursorPosition(22, 1); cout << char(203);
	Console::SetCursorPosition(22, 9); cout << char(202);
	Console::SetCursorPosition(5, 27); cout << char(200);
	Console::SetCursorPosition(112, 27); cout << char(188);
}

string Escribir_Destinatario(){
	colours::Blue;
	Console::SetCursorPosition(11, 3); cout << "Para:";
	colours::Blue;
	Console::SetCursorPosition(12, 7); cout << "CC:";
	colours::Green;
	Console::SetCursorPosition(10, 11); cout << "Asunto: ";
	colours::White;
	colours::Gray;
	Console::SetCursorPosition(9, 14); cout << "Contenido del correo: ";
	Console::SetCursorPosition(26, 3); cin >> Destinatario;
	return Destinatario;
}

string Escribir_CC() {
	Console::SetCursorPosition(26, 7); cin >> CopiaCorreo;
	return CopiaCorreo;
}

string Escribir_Asunto() {
	Console::SetCursorPosition(21, 11); cin >> Asunto;
	return Asunto;
}

string Escribir_Correo() {
	Console::SetCursorPosition(10, 17); cin >> ContenidoCorreo;
	return ContenidoCorreo;
}