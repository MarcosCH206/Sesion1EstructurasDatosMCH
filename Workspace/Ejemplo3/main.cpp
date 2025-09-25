#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int x = 'a';
	x = x+1;
	char c = x;
	// Se demuestra como C++ no es un lenguaje tipado
	cout << "El valor del int \"x\" es " << x << "." << endl;
	cout << "El valor del char \"c\" es " << c << "." << endl;

	
	return 0;
}
