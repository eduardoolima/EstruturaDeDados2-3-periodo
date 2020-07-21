
#include <iostream>
#include "Pilhas.h"

int main()
{
	Pilha<char> *P1 = new Pilha<char>();

	Pilha<float> *P2 = new Pilha<float>();

	Pilha<string> *P3 = new Pilha<string>();

	P1->push('a');
	P1->push('b');
	P1->push('c');

	P2->push(10.5);
	P2->push(2.3);

	P3->push("Marcos");
	P3->push("Alberto");

	cout << P1->pop() << endl;

	cout << P2->pop() << endl;

	cout << P3->pop().c_str() << endl;
	system("pause");
	return 0;
}

