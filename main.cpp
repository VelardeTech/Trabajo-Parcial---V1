#include "MainSecond.h"
#include "Persona.h"
int main() {
	//Persona* persona;
	string Nombre;
	string Correo;
	string Sexo;
	int Numero_Tel;
	string Clave;
	MenuInicial();
	int Opcion = OpcionInicial(); 

	switch (Opcion) {
	case 1: Crear_Cuenta();
		Nombre = NombrePersona();
		Sexo = GeneroPersona();
		Numero_Tel = NumeroPersona();
		Correo = CorreoPersona();
		Clave = ClavePersona();
		Finaly_Crear();
		//Mostrar los datos creados
		MostrarDatos(Nombre, Sexo, Numero_Tel, Correo, Clave);
		//Fynaly Mostrado y retornar al inicio
		Clear();
		main(); //Inicio Xd
		break;
	case 2:
		break;
	case 3: cout << "Saliendo . . ." << endl;
		_sleep(2000); //Tiempo de 2 segundos
		exit(0); 
	default: 
		break;
	}


	cin.get(); 
	return 0;
}