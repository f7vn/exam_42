#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int pgcd(int n1, int n2)
{
	int i = 0;
	if (n1 < n2)
	{
		i = n1;
		while (i)
		{
			if (!(n1 % i) && !(n2 % i))
				return(i);
			i--;
		}
	}

	if (n1 > n2)
	{
		i = n2;
		while (i)
		{
			if (!(n1 % i) && !(n2 % i))
				return(i);
			i--;
		}
	}
	return 0;
}


int main(int argc, char *argv[])
{
	int i = 0;
	if (argc == 3)
		{i = pgcd(atoi(argv[1]), atoi(argv[2]));
		printf("%d", i);}
	write(1, "\n", 1);
	return 0;
}
