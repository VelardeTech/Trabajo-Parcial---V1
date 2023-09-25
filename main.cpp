#include "MenuInicial.h"
//#include "Persona.h"
#include "NuevoCorreo.h"
#include "Lista.h"
#include "CreacionCuenta.h"
#include "InicioSesion.h"
#include "InterfazCorreo.h"
#include "OpcionesCorreo.h"
#include "Correos.h"
#include "Ordenamiento.h"
#include "Nodo.h"
#include "ConsultarMensajes.h"
#include "MostrarMensajeElegido.h"
#include "VerEnviado.h"
#include "CambiarContra.h"
#include "mainConfig.h"
#define colours Console::ForegroundColor = ConsoleColor
#define Escape 27


int main() {
	Console::CursorVisible = false;
	//Persona* persona;
	string Nombre;
	string Correo;
	string Sexo;
	string Destinatario;
	string CopiaCorreo;
	string Asunto;
	string ContenidoCorreo;
	string AccesoCorreo;
	string ContraCorreo;
	//bool Prioridad[6] = { false,false,true,true,false,true };
	bool NoLeido[6] = {true,true,true,true,true,false};
	int Numero_Tel;
	string Clave;
	int CredencialesCorrectas;
	int CredencialesCorrectasContra;
	MenuInicial();
	int OpcionMenu = OpcionInicial(); 
	switch (OpcionMenu) {
	case 1:
		Crear_Cuenta();
		Nombre = NombrePersona();
		Sexo = GeneroPersona();
		Numero_Tel = NumeroPersona();
		Correo = CorreoPersona();
		Clave = ClavePersona();
		Finaly_Crear();
		//Mostrar los datos creados
		MostrarDatos(Nombre, Sexo, Numero_Tel, Correo, Clave);
		//Fynaly Mostrado y retornar al inicio
		system("cls");
		main(); //Inicio Xd
		break;
	case 2: 
		while(1){
			system("cls");
			InicioSesion();
			Console::CursorVisible = true;
			Console::SetCursorPosition(44, 14); cin >> AccesoCorreo;
			Console::SetCursorPosition(44, 17); cin >> ContraCorreo;
			CredencialesCorrectas = Autenticacion(AccesoCorreo, ContraCorreo);
			if (CredencialesCorrectas == 1) break;
		}
		Console::CursorVisible = false;
		while (1) {
			system("cls");
			InterfazCorreo();
			ConsultarMensajes(NoLeido);
			Imprimir();
			Console::CursorVisible = false;
			int seleccionOpcionCorreo = OpcionesDeCorreo(); 
			switch (seleccionOpcionCorreo) {
			case 1: {
				int SeleccionEmail = SeleccionVerEmail();
				NoLeido[SeleccionEmail-1] = false;
				system("cls");
				MensajeElegido(SeleccionEmail-1);
				break;
			}
			case 2: {
				system("cls");
				InterfazNuevoMensaje();
				Destinatario = Escribir_Destinatario();
				CopiaCorreo = Escribir_CC();
				Asunto = Escribir_Asunto();
				ContenidoCorreo = Escribir_Correo();
				break;
			}
			case 3: {
				system("cls");
				main();
				break;
			}
			case 4: {
				system("cls");
				InterfazNuevoMensaje();
				MostrarEnviado(Destinatario, CopiaCorreo, Asunto,ContenidoCorreo);
				cout << ContenidoCorreo;
				getline(cin, ContenidoCorreo);
				cout << ContenidoCorreo;
				_getch();
				break;
			}
			case 5: {
				while (1) {
					system("cls");
					InicioSesion();
					Console::CursorVisible = true;
					Console::SetCursorPosition(44, 14); cin >> AccesoCorreo;
					Console::SetCursorPosition(44, 17); cin >> ContraCorreo;
					CredencialesCorrectasContra = CambiaContra(AccesoCorreo, ContraCorreo);
					if (CredencialesCorrectasContra == 1) break;
				}
				CambioContra(AccesoCorreo);
			}
			}
			Console::CursorVisible = false;
			char tecla = getch();
			if (tecla == Escape) { system("cls");  main(); }
		}
		break;
	case 4: exit(0); break;
	case 3:
		Lista<string> listaCorreos;
		int opcion;
		int cant;

		while (true) {
			opcion = Menu();
			if (opcion == 5) exit(0);
			if (opcion == 1) {

				cant = opcion01(); //Ingresamos la cantidad

				for (int i = 0; i < cant; i++) {  // Generar correos depende de la cantidad 
					string correo = generarCorreo();
					listaCorreos.insertar(correo);
				}
				ofstream archivo("CorreosAleatorios.txt");  //Aquí guaradamos en un archivo
				if (archivo.is_open()) {
					listaCorreos.Guardar(archivo);
					archivo.close();
					Confirma_Final();
				}
			}

			else if (opcion == 3) {
				listaCorreos.OrdenarSeleccion();

				ofstream archivo("CorreosOrdenado.txt");  //Aquí guaradamos en un archivo
				if (archivo.is_open()) {
					listaCorreos.Guardar(archivo);
					archivo.close();
					colours::Gray;
					cout << "\n\n\n\n\t\tLos correos ordenados se guardaron correctamente" << endl;
				}
				cin.ignore();
				system("cls");
			}

			else if (opcion == 4) {
				colours::Green;
				cout << "\n\n\t\t\tMostrar Cuentas Ordenadas" << endl << endl;
				colours::Gray;
				listaCorreos.imprimir();
				cin.ignore();
				system("cls");
			}

			else if (opcion == 2) {
				colours::Green;
				cout << "\n\n\n\t\t\t\tMostrar Cuentas aleatorias" << endl << endl;
				colours::Gray;
				listaCorreos.imprimir();

				cin.ignore();
				system("cls");
			}

		}
		break;
	}
	cin.get(); 
	return 0;
}

