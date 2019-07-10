#include <stdio.h>

int        max(int* tab, unsigned int len)
{
	if(!tab)
		return (0);
    int max;

    max = 0;
    len--;
    while (len > 0)
    {
        if (tab[len] > max)
            max = tab[len];
        len--;
    }
    return (max);
}

int main(int argc, char *argv[]) {

    int i[5] = {1, 3, 5, 3, 2};
    printf("%d\n", max(i, 5));
    return 0;
}
