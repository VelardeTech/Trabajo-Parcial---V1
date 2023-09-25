#pragma once
#include <iostream>
#include <string>
#include "Lista.h"
using namespace std;
using namespace System;
string generarCorreo() {

    string CorreoAleatorio[] = { "PaoloGuerrero", "AndreDaSilva", "Mark123",
                                 "LizbethTeresita", "PerezDeCuellar", "Roosvelt", "Zuckerberg", "Izaguirre"
                                  "Cody", "Velarde", "Dangela", "Fernandez" };
    string dominio = "@gmail.com";

    string NuevoCorreo = CorreoAleatorio[rand() % 11];

    return NuevoCorreo + dominio;
}