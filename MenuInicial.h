#pragma once
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
using namespace System;
#define colours Console::ForegroundColor = ConsoleColor
#define Arriba 72
#define Abajo  80
#define Derecha 77
#define Izquierda 75
#define ENTER 13

void MenuInicial() {
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
	Console::SetCursorPosition(25, 14); cout << "Crear cuenta";
	Console::SetCursorPosition(65, 14); cout << "Iniciar sesion";
	Console::SetCursorPosition(25, 17); cout << "Generar correos aleatorios";
	Console::SetCursorPosition(65, 17); cout << "Salir";
}

int OpcionInicial() {
    int Opcion = 1;
    colours::DarkYellow;
    int a = 20;
    int b = 14;
    Console::SetCursorPosition(a, b);
    cout << ">>>";
    while (true) {
        char tecla = getch();
        if (tecla == Abajo) {
            if (a == 20 && b == 14) {
                Console::SetCursorPosition(20, 14); cout << "   ";
                colours::DarkYellow;
                Console::SetCursorPosition(20, 17); cout << ">>>";
                a = 20;
                b = 17;
                Opcion = 3;
            }
            else if(a == 60 && b == 14) {
                Console::SetCursorPosition(60, 14); cout << "   ";
                colours::DarkYellow;
                Console::SetCursorPosition(60, 17); cout << ">>>";
                a = 60;
                b = 17;
                Opcion = 4;
            }
        }
        if (tecla == Arriba) {
            if (a == 20 && b == 17) {
                Console::SetCursorPosition(20, 17); cout << "   ";
                colours::DarkYellow;
                Console::SetCursorPosition(20, 14); cout << ">>>";
                a = 20;
                b = 14;
                Opcion = 1;
            }
            else if (a == 60 && b == 17) {
                Console::SetCursorPosition(60, 17); cout << "   ";
                colours::DarkYellow;
                Console::SetCursorPosition(60, 14); cout << ">>>";
                a = 60;
                b = 14;
                Opcion = 2;
            }
        }
        if (tecla == Derecha) {
            if (a == 20 && b == 14) {
                Console::SetCursorPosition(20, 14); cout << "   ";
                colours::DarkYellow;
                Console::SetCursorPosition(60, 14); cout << ">>>";
                a = 60;
                b = 14;
                Opcion = 2;
            }
            else if (a == 20 && b == 17) {
                Console::SetCursorPosition(20, 17); cout << "   ";
                colours::DarkYellow;
                Console::SetCursorPosition(60, 17); cout << ">>>";
                a = 60;
                b = 17;
                Opcion = 4;
            }
        }
        if (tecla == Izquierda) {
            if (a == 60 && b == 14) {
                Console::SetCursorPosition(60, 14); cout << "   ";
                colours::DarkYellow;
                Console::SetCursorPosition(20, 14); cout << ">>>";
                a = 20;
                b = 14;
                Opcion = 1;
            }
            else if (a == 60 && b == 17) {
                Console::SetCursorPosition(60, 17); cout << "   ";
                colours::DarkYellow;
                Console::SetCursorPosition(20, 17); cout << ">>>";
                a = 20;
                b = 17;
                Opcion = 2;
            }
        }
        if (tecla == ENTER) break;
    }
	Console::Clear();
	colours::Gray;
	return Opcion;
}