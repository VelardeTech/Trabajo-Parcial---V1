#pragma once
#include "Lista.h"
template <typename T>
void Lista<T>::OrdenarSeleccion() {
    Nodo<T>* actual = lista;

    while (actual != NULL) {
        Nodo<T>* minNodo = actual;
        Nodo<T>* siguiente = actual->siguiente; //Inicializa el punt. siguiente

        while (siguiente != NULL) {
            if (siguiente->dato < minNodo->dato) {
                minNodo = siguiente;
            }
            siguiente = siguiente->siguiente;
        }

        T temp = actual->dato;
        actual->dato = minNodo->dato;
        minNodo->dato = temp;
        actual = actual->siguiente;
    }
}

//int k, Menor;
    //for (int i = 0; i < n - 1; i++) {
    //    k = i;   //  K = 0
    //    menor = a[i];   // Menor = 4
    //    for (int j = i + 1; j < n; j++) {
    //        if (a[j] < menor) {
    //            menor = a[j];
    //            k = j;
    //        }
    //    }
    //    a[k] = a[i];
    //    a[i] = menor;
    //}