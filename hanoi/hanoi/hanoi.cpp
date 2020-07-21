

#include <iostream>

void hanoi(int n, char A, char B, char C, int *pC)
{
	if (n == 1)
		cout << (*pC)++ << ":Mova o disco " << n << " da torre " << A << " para torre " << C << endl;
	else
	{
		hanoi(n - 1, A, C, B, pC);
		cout << (*pC)++ << ":Mova o disco " << n << " da torre " << A << " para torre " << C << endl;
		hanoi(n - 1, B, A, C, pC);
	}
}

int main()
{
	
	int c = 1;
	hanoi(3, 'A', 'B', 'C', &c);
}

