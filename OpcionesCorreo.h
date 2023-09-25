#pragma once
using namespace std;
#define Arriba 72
#define Abajo  80
#define Derecha 77
#define Izquierda 75
#define ENTER 13

int OpcionesDeCorreo() {
	int opcion = 1;
	int a = 45;
	int b = 21;
	Console::SetCursorPosition(45, 21); cout << ">>>";
	while (1) {
		char tecla = getch();
		if (tecla == Abajo) {
			if (a == 45 && b == 21) {
				opcion = 2;
				Console::SetCursorPosition(45, 21); cout << "   ";
				Console::SetCursorPosition(45, 24); cout << ">>>";
				a = 45;
				b = 24;
			}
			else if (a == 45 && b == 24) {
				opcion = 3;
				Console::SetCursorPosition(45, 24); cout << "   ";
				Console::SetCursorPosition(45, 27); cout << ">>>";
				a = 45;
				b = 27;
			}
		}
		if (tecla == Arriba) {
			if (a == 45 && b == 24) {
				opcion = 1;
				Console::SetCursorPosition(45, 24); cout << "   ";
				Console::SetCursorPosition(45, 21); cout << ">>>";
				a = 45;
				b = 21;
			}
			else if (a == 45 && b == 27) {
				opcion = 2;
				Console::SetCursorPosition(45, 27); cout << "   ";
				Console::SetCursorPosition(45, 24); cout << ">>>";
				a = 45;
				b = 24;
			}
		}
		if (tecla == Izquierda) {
			if (((b == 21 || b == 24 || b == 27) && a == 45)) {
				Console::SetCursorPosition(a, b); cout << "   ";
				Console::SetCursorPosition(22, 24); cout << ">>>";
				a = 22;
				b = 24;
				opcion = 4;
			}
			else if (a == 76 && b == 24) {
				opcion = 2;
				Console::SetCursorPosition(76, 24); cout << "   ";
				Console::SetCursorPosition(45, 24); cout << ">>>";
				a = 45;
				b = 24;
			}
		}
		if (tecla == Derecha) {
			if (((b == 21 || b == 24 || b == 27) && a == 45)) {
				Console::SetCursorPosition(a, b); cout << "   ";
				Console::SetCursorPosition(76, 24); cout << ">>>";
				opcion = 5;
				a = 76;
				b = 24;
			}
			else if (a == 22 && b == 24) {
				opcion = 2;
				Console::SetCursorPosition(22, 24); cout << "   ";
				Console::SetCursorPosition(45, 24); cout << ">>>";
				a = 45;
				b = 24;
			}
		}
		if (tecla == ENTER) break;
	}
	return opcion;
}

int SeleccionVerEmail() {
	int opcion = 1;
	Console::SetCursorPosition(89, 21); cout << char(174);
	Console::SetCursorPosition(93, 21); cout << char(175);
	Console::SetCursorPosition(78, 22); cout << "Selecciona el email por ver";
	Console::SetCursorPosition(91, 21); cout << opcion;
	while (1) {
		char tecla = _getch();
		if (tecla == Derecha) {
			if (opcion != 6) {
				opcion++;
				Console::SetCursorPosition(91, 21); cout << opcion;
			}
		}
		else if (tecla == Izquierda) {
			if (opcion != 1) {
				opcion--;
				Console::SetCursorPosition(91, 21); cout << opcion;
			}
		}
		else if (tecla == ENTER) break;
	}
	return opcion;
}
