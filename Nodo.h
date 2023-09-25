#pragma once
#include <iostream>
#include <fstream> // Librería para guardar en Arch.txt
#include <string>
using namespace std;
// Definición de la clase Nodo para la lista simple
template <typename T>
class Nodo {

public:
    T dato;
    Nodo* siguiente;
    Nodo(T valor) : dato(valor), siguiente(NULL) {}
};