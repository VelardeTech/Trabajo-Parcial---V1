#pragma once
#include <iostream>

using namespace std;

void MensajeElegido(int opcion) {
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
	for (int i = 2; i < 27; i++) {
		Console::SetCursorPosition(5, i); //generacion columna arriba
		cout << char(186);
	}
	for (int i = 2; i < 27; i++) {
		Console::SetCursorPosition(112, i); //generacion columna arriba
		cout << char(186);
	}
	for (int i = 6; i < 112; i++) {
		Console::SetCursorPosition(i, 5); //generacion fila destinatario
		cout << char(205);
	}
	for (int i = 6; i < 112; i++) {
		Console::SetCursorPosition(i, 9); //generacion fila copia correo
		cout << char(205);
	}
	for (int i = 2; i < 9; i++) {
		Console::SetCursorPosition(22, i); //generacion columna arriba
		cout << char(186);
	}
	Console::SetCursorPosition(22, 1); cout << char(203);
	Console::SetCursorPosition(22, 9); cout << char(202);
	Console::SetCursorPosition(5, 27); cout << char(200);
	Console::SetCursorPosition(112, 27); cout << char(188);
	Console::SetCursorPosition(11, 3); cout << "De:";
	Console::SetCursorPosition(9, 7); cout << "Asunto:";
	Console::SetCursorPosition(76, 28); cout << " <- Presiona cualquier tecla para volver";
	if (opcion == 0) {
		Console::SetCursorPosition(26, 3); cout << "informeswetalk@upc.edu.pe";
		Console::SetCursorPosition(26, 6); cout << "Listo para una entrevista de trabajo? Supera la barrera del idioma con WeTalk";
		Console::SetCursorPosition(8, 11); cout << "El trabajo es importante en la vida de todo profesional ya que te permitira ganar nuevas experiencias";
		Console::SetCursorPosition(8, 12); cout << "y desarrollar todas tus habilidades. Que esperas? Supera tus entrevistas en ingles";
		Console::SetCursorPosition(8, 15); cout << "APROVECHA UN 10% DE DESCUENTO";
		Console::SetCursorPosition(8, 19); cout << "Descubre WETALK!";
	}
	if (opcion == 1) {
		Console::SetCursorPosition(26, 3); cout << "bcpcomunica@email.bcp.com.pe";
		Console::SetCursorPosition(26, 6); cout << "Abre una Cuenta BCP en dolares y compra dolares con Yape! Obtenla con total rapidez";
		Console::SetCursorPosition(26, 7); cout << "desde donde estes";
		Console::SetCursorPosition(8, 11); cout << "Ingresa a:";
		Console::SetCursorPosition(8, 14); cout << "VIABCP";
		Console::SetCursorPosition(8, 18); cout << "Como obtengo este beneficio? Ingresa a la web y busca el botón Abrir cuenta.";
		Console::SetCursorPosition(8, 20); cout << "Cambia dolares o soles las 24 horas del dia, tipo de cambio referencial y transaccion con seguridad";
	}
	if (opcion == 2) {
		Console::SetCursorPosition(26, 3); cout << "contacto@pacificoseguros.com.pe";
		Console::SetCursorPosition(26, 6); cout << "Haz crecer tus ahorros! Recupera hasta el doble de lo pagado + hasta S/200 en vale";
		Console::SetCursorPosition(8, 11); cout << "Con el Seguro de VIDA DEVOLUCION, ademas de hacer crecer tus ahorros, podras proteger a tu familia";
		Console::SetCursorPosition(8, 12); cout << "hasta con S/150,000, y disfrutaras de beneficios exclusivos!";
		Console::SetCursorPosition(8, 15); cout << "APROVECHA - Llevate hasta S/200 en vale para comprar en miles de tiendas. Exclusivo online";
		Console::SetCursorPosition(8, 17); cout << "GANA - Porque recuperas hasta el doble de lo pagado para lograr todos tus planes";
		Console::SetCursorPosition(8, 19); cout << "OBTEN GRATIS - Un chequeo medico preventivo mas examenes de laboratorio";
	}
	if (opcion == 3) {
		Console::SetCursorPosition(26, 3); cout << "no-reply@spotify.com";
		Console::SetCursorPosition(26, 6); cout << "Recordatorio: actualiza los detalles de pago.";
		Console::SetCursorPosition(8, 11); cout << "Todavia no podemos procesar el pago";
		Console::SetCursorPosition(8, 12); cout << "El metodo de pago para que elegiste para Spotify Premium no funciona y no pudimos procesar tu pago";
		Console::SetCursorPosition(8, 15); cout << "- Hay problema con tu banco";
		Console::SetCursorPosition(8, 17); cout << "- La tarjeta con la que intentas pagar esta vencida";
		Console::SetCursorPosition(8, 19); cout << "- Tu cuenta tiene fondos insuficientes";
	}
	if (opcion == 4) {
		Console::SetCursorPosition(26, 3); cout << "newsletter@em.pedidosya.com";
		Console::SetCursorPosition(26, 6); cout << "Pagando con Visa tienes Plus gratis!";
		Console::SetCursorPosition(8, 11); cout << "Envios gratis ilimitados y beneficios exclusivo en miles de locales";
		Console::SetCursorPosition(8, 13); cout << "Hasta 3 meses gratis de suscripcion";
		Console::SetCursorPosition(8, 14); cout << "Pagando con Visa Gold, Platinum o Signature, Infinite.";
		Console::SetCursorPosition(8, 18); cout << "SUSCRIBETE YA!";
	}
	if (opcion == 5) {
		Console::SetCursorPosition(26, 3); cout << "no-reply@accounts.google.com";
		Console::SetCursorPosition(26, 6); cout << "Alerta de seguridad";
		Console::SetCursorPosition(8, 11); cout << "Un nuevo acceso en el dispositivo";
		Console::SetCursorPosition(8, 13); cout << "Detectamos un nuevo acceso a tu Cuenta de Google en el dispositivo Windows.";
		Console::SetCursorPosition(8, 14); cout << "Si fuiste tu, no tienes que hacer nada. De lo contrario, te ayudaremos a proteger tu cuenta.";
		Console::SetCursorPosition(8, 19); cout << "Tambien puedes ver la actividad de seguridad en"<<char(104)<<"ttps://myaccount.google.com/notifications";
	}
}