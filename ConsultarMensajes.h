#pragma once


void ConsultarMensajes(bool*NoLeido) {
	if (NoLeido[0]==true) { colours::Green; } else { colours::Blue; }
	Console::SetCursorPosition(7, 3); cout << "WeTalkUPC";
	if (NoLeido[1] == true) { colours::Green; }
	else { colours::Blue; }
	Console::SetCursorPosition(7, 6); cout << "BCP Comunica";
	if (NoLeido[2] == true) { colours::Green; }
	else { colours::Blue; }
	Console::SetCursorPosition(7, 9); cout << "Pacifico Seguros";
	if (NoLeido[3] == true) { colours::Green; }
	else { colours::Blue; }
	Console::SetCursorPosition(7, 12); cout << "Spotify";
	if (NoLeido[4] == true) { colours::Green; }
	else { colours::Blue; }
	Console::SetCursorPosition(7, 15); cout << "PedidosYa";
	if (NoLeido[5] == true) { colours::Green; }
	else { colours::Blue; }
	Console::SetCursorPosition(7, 18); cout << "Alertas Google";
	colours::White;
}

void Imprimir() {
	Console::SetCursorPosition(37, 3);
	cout << "Listo para una entrevista de trabajo? Supera la barrera del idioma con...";
	Console::SetCursorPosition(37, 6);
	cout << "Abre tu CUENTA BCP en dolares y compra dolares con YAPE. Obtenla con to...";
	Console::SetCursorPosition(37, 9);
	cout << "Haz crecer tus ahorros! Recupera hasta el doble de lo pagado + hasta S/...";
	Console::SetCursorPosition(37, 12);
	cout << "Recuerda. Actualiza tus detalles de pago.";
	Console::SetCursorPosition(37, 15);
	cout << "Pagando con Visa tienes Plus Gratis!";
	Console::SetCursorPosition(37, 18);
	cout << "Alerta de Seguridad";
}