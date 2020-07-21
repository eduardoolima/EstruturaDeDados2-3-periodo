#pragma once
#include <iostream>
using namespace std;

template <class Elem>
class Fila
{
private:
	struct no
	{
		Elem info;
		no *prox;
	} *I,*F;
	int TAM;

public:
	Fila();
	~Fila();
	void enqueue(Elem);
	Elem dequeue();
	int tamanho();
	char empty();
	void mostra();

};

template <class Elem>
Fila<Elem>::Fila()
{
	I = NULL;
	F = NULL;
	TAM = 0;
}

template <class Elem>
void Fila<Elem>::enqueue(Elem x)
{
	no *aux = new no;
	aux->info = x;
	aux->prox = NULL;
	F = aux;
	if (!TAM)
	{
		I = aux;
	}
	else
	{
		F->prox = aux;
	}
	TAM++;
}

template <class Elem>
Elem Fila<Elem>::dequeue()
{
	Elem x;
	if (TAM)
	{
		no *aux = I;
		I = F->prox;
		x = aux->info;
		delete aux;
		TAM--;
		if (!TAM)
		{
			F = NULL;
		}
	}
	return x;
}

template <class Elem>
char Fila<Elem>::empty()
{
	if (TAM)
		return 0;
	else
		return 1;
}

template <class Elem>
int Fila<Elem>::tamanho()
{
	return TAM;
}

template<class Elem>
void Fila<Elem>::mostra()
{
	no*m = I;
	cout << "[";
	while (m != NULL)
	{
		cout << I;
		m--;
	}
}







