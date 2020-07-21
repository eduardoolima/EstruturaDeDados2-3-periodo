#pragma once
#include<iostream>

using namespace std;

class LstOrd
{
private:
	struct no
	{
		int info;
		no *prox;
	};
	no* l;
	int tam;
public:
	LstOrd();	
	void Insere(int);
	int Tamanho();
	void Mostra();
};

LstOrd::LstOrd()
{
	l = NULL;
	tam = 0;
}

void LstOrd::Insere(int x)
{
	if ((l == NULL) || (x < l->info))
	{
		//n=aux!
		no *n = new no;
		n->info = x;
		n->prox = l;
		l = n;
	}
	else
	{
		no *p = l;
		while ((p->prox != NULL) && (x > p->prox->info))
		{
			p = p->prox;
		}
		no *n = new no;
		n->info = x;
		n->prox = p->prox;
		p->prox = n;
	}
	tam++;
}