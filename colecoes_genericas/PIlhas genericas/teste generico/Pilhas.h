#pragma once
#include <iostream>
using namespace std;

template <class Elem>
class Pilha
{
private:
	struct no
	{
		Elem info;
		no *prox;
	} *P;
	int TAM;

public:
	Pilha();
	~Pilha();
	void push(Elem);
	Elem pop();
	int tamanho();
	char empty();

};

template <class Elem>
Pilha<Elem>::Pilha()
{
	P = NULL;
	TAM = 0;
}

template <class Elem>
void Pilha<Elem>::push(Elem x)
{
	no *aux = new no;
	aux->info = x;
	aux->prox = P;
	P = aux;
	TAM++;
}

template <class Elem>
Elem Pilha<Elem>::pop()
{
	Elem x;
	if (TAM)
	{
		no *aux = P;
		P = P->prox;
		x = aux->info;
		delete aux;
		TAM--;
	}
	return x;
}

template <class Elem>
char Pilha<Elem>::empty()
{
	if (TAM)
		return 0;
	else
		return 1;
}

template <class Elem>
int Pilha<Elem>::tamanho()
{
	return TAM;
}

