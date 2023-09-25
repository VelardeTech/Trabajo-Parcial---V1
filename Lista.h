#pragma once
#include "Nodo.h"

using namespace System;
// Definición de la clase ListaSimple
template <typename T>
class Lista {
private:
    Nodo<T>* lista;
public:
    Lista() : lista(NULL) {}

    void insertar(T valor) {
        Nodo<T>* nuevoNodo = new Nodo<T>(valor);
        nuevoNodo->siguiente = lista;
        lista = nuevoNodo;
    }

    void Guardar(ostream& os) {
        Nodo<T>* actual = lista;

        while (actual) {
            os << actual->dato << endl;
            actual = actual->siguiente;
        }
    }

    void imprimir() {
        Nodo<T>* actual = lista;
        int num = 1;
        while (actual) {
            cout << "\t" << num << " ->  " << actual->dato << std::endl;
            actual = actual->siguiente;
            num++;
        }
    }
    void OrdenarSeleccion();
};

string generarCorreo();