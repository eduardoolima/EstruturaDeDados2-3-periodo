
#include <iostream>
#include "Filas.h"
using namespace std;

int main()
{
	Fila<char> *P1 = new Fila<char>();

	Fila<float> *P2 = new Fila<float>();

	Fila<string> *P3 = new Fila<string>();

	P1->enqueue('a');
	P1->enqueue('b');
	P1->enqueue('c');

	P2->enqueue(10.5);
	P2->enqueue(2.3);

	P3->enqueue("Marcos");
	P3->enqueue("Alberto");

	cout << P1->dequeue() << endl;

	cout << P2->dequeue() << endl;

	cout << P3->dequeue().c_str() << endl;

	P1->mostra();

	system("pause");
	return 0;
}

