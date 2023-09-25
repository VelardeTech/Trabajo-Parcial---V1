#pragma once
#include <iostream>
using namespace std;

void MostrarEnviado(string destino, string cc, string asunto, string contenido) {
	colours::Blue;
	Console::SetCursorPosition(11, 3); cout << "Para:";
	colours::Blue;
	Console::SetCursorPosition(12, 7); cout << "CC:";
	colours::Green;
	Console::SetCursorPosition(10, 11); cout << "Asunto: ";
	colours::White;
	colours::Gray;
	Console::SetCursorPosition(9, 14); cout << "Contenido del correo: ";
	colours::White;
	Console::SetCursorPosition(27, 3); cout << destino;
	Console::SetCursorPosition(27, 7); cout << cc;
	Console::SetCursorPosition(27, 11); cout << asunto;
	Console::SetCursorPosition(9, 16);
}