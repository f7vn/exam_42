#include <stdlib.h>
#include <stdio.h>
int        *ft_rrange(int start, int end)
{
    int *range;
    int i;

    if (start <= end)
        range = (int *)malloc(sizeof(int) * (end - start + 1));
    if (start > end)
        range = (int *)malloc(sizeof(int) * (start - end + 1));
    i = 0;
    while (end != start)
    {
        range[i++] = end;
        end += (end > start) ? -1 : 1;
    }
    range[i] = end;
    return(range);
}

int main(int argc, char const *argv[])
{
    int *i;
    int n = 0;
    i = ft_rrange(-1, 2);
while(i[n])
	{printf("%d\n", i[n]);
	n++;}
    return 0;
}
