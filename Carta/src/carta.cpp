#include "carta.h"
carta::carta(int a,char b):numero(a),palo(b){};
void carta::Print(){
	if (numero == 1)
		cout << "| A " << palo << " |" << endl;
	else if (numero == 11)
		cout << "| J " << palo << " |" << endl;
	else if (numero == 12)
		cout << "| Q " << palo << " |" << endl;
	else if (numero == 13)
		cout << "| K " << palo << " |" << endl;
	else
		cout << "| " << numero << " " << palo << " |" << endl;
}
