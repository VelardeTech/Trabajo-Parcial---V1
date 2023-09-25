#pragma once
#include <iostream>
#include <fstream> // Librer�a para guardar en Arch.txt
#include <string>
using namespace std;
// Definici�n de la clase Nodo para la lista simple
template <typename T>
class Nodo {

public:
    T dato;
    Nodo* siguiente;
    Nodo(T valor) : dato(valor), siguiente(NULL) {}
};