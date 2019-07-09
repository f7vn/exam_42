#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}

int main(int argc, char const *argv[])
{
	int i1 = 1234;
	int i2 = 5678;
	printf("%d%d\n", i1, i2);
	ft_swap(&i1, &i2);
	printf("%d%d\n", i1, i2);
	return 0;
}
