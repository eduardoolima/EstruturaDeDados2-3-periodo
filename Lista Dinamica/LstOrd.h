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
	int Ultimo();
	int Ocorrencias(int);
	int Item(int);
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

int LstOrd::Tamanho()
{
	return tam;
}

void LstOrd::Mostra()
{
	no *m = l;
	cout << "[";
	while (m)
	{
		cout << m->info;
		m = m->prox;
		if (m)
			cout << ",";
		//system("pause");
	}
	cout << "]" << endl;
}

int LstOrd::Ultimo()
{
	if (l != NULL)
	{
		no *m = l;
		while (m)
		{
			m = m->prox;
			if (m->prox == NULL)
			{
				return m->info;
			}

		}
	}
	else
	{
		return 0;
	}
	
}

int LstOrd::Ocorrencias(int x)
{
	int aux = 0;
	no *p = l;
	while (p)
	{
		if (p->info == x)
		{
			aux++;
		}
		p = p->prox;				
	}
	return aux;
}


int LstOrd::Item(int x)
{
	if (l != NULL)
	{
		int aux = 0;
		no *n = l;
		for (int i = 1;i < x;i++)
		{
			n = n->prox;
		}
		return n->info;
	}
	else
	{
		return 0;
	}
}