#include <stdio.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
	int i = a;
	while (a >= i)
	{
		if (!(a % i) && !(b % i))
			return i;
		i--;
	}
	return 1;
}


int main(int argc, char const *argv[])
{
	int a = 56;
	int b = 56;
	int i = 0;

	i = a * b / lcm(a, b);
	printf("%d\n", i);
	return 0;
}
