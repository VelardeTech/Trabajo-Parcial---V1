#pragma once

#include <iostream>
#include <string>
using namespace std;
using namespace System;
#define colours Console::ForegroundColor = ConsoleColor

void InterfazCorreo() {
	Console::Clear;
	colours::White;
	for (int i = 6; i < 113; i++) {
		Console::SetCursorPosition(i, 1); //generacion base arriba
		cout << char(205);
	}
	for (int i = 6; i < 113; i++) {
		Console::SetCursorPosition(i, 19); //generacion base inferior
		cout << char(205);
	}
	for (int i = 2; i < 20; i++) {
		Console::SetCursorPosition(5, i); //generacion columna arriba
		cout << char(186);
	}
	for (int i = 2; i < 19; i++) {
		Console::SetCursorPosition(112, i); //generacion columna arriba
		cout << char(186);
	}
	for (int i = 2; i < 19; i++) {
		Console::SetCursorPosition(35, i); //generacion segunda columna
		cout << char(186);
	}
	for (int i = 6; i < 112; i++) {
		Console::SetCursorPosition(i, 4); //generacion base uno
		cout << char(205);
	}for (int i = 6; i < 112; i++) {
		Console::SetCursorPosition(i, 7); //generacion base uno
		cout << char(205);
	}
	for (int i = 6; i < 112; i++) {
		Console::SetCursorPosition(i, 10); //generacion base uno
		cout << char(205);
	}
	for (int i = 6; i < 112; i++) {
		Console::SetCursorPosition(i, 13); //generacion base uno
		cout << char(205);
	}
	for (int i = 6; i < 112; i++) {
		Console::SetCursorPosition(i, 16); //generacion base uno
		cout << char(205);	
	}
	Console::SetCursorPosition(5, 1); cout << char(201);
	Console::SetCursorPosition(112, 1); cout << char(187);
	Console::SetCursorPosition(5, 19); cout << char(200);
	Console::SetCursorPosition(112, 19); cout << char(188);
	Console::SetCursorPosition(49, 21); cout << "Visualizar correo";
	Console::SetCursorPosition(49, 24); cout << "Escribir nuevo correo";
	Console::SetCursorPosition(49, 27); cout << "Salir al menu";
	Console::SetCursorPosition(26, 24); cout << "Ver enviados";
	Console::SetCursorPosition(81, 24); cout << "Cambiar contrase"<<char(164)<<"a";
	colours::Green; Console::SetCursorPosition(9, 20); cout << "No Leido";
	colours::Blue; Console::SetCursorPosition(9, 22); cout << "Leido";
}