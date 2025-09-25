#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	char c;
	bool test;
	cout << "Pulse teclas numericas. Acabe pulsando ESC\n";
	do {
		c = getchar(); // Saca el carácter
		test = ((c >= '0') && (c <= '9'));
		// Comprueba si la pulsación es una tecla numñerica
		if (test)
		cout << c << " pulsando.\n";
		// Si se verifica la condición se imprime la tecla
	} while (c != 27); // La tecla 27 en ASCII es ESC
	
	return 0;
}
