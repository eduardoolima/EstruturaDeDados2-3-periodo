#include <iostream>

int expo(int x, int y)
{

	if (x == 0)
		return 0;
	if (y == 0)
		return 1;
	if (y == 1)
		return x;
	else
	{
		return x * expo(x, y - 1);
	}
}
int main()
{
	std::cout << expo(2, 3);
}

