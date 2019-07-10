#include <stdio.h>
#include <stdlib.h>
int ft_strlen(char *c)
{
	int i;
	i = 0;

	while(c[i])
		i++;
	return (i);
}

char    *ft_strdup(char *src)
{
	char *tmp;
	int i;

	i = 0;
	if(!src || !(tmp = (char *)malloc(sizeof(char) * ft_strlen(src) + 1)))
		return (NULL);
	while (src[i])
		{tmp[i] = src[i];
		i++;}
		tmp[i] = '\0';
	return (tmp);
}

int main(int argc, char *argv[])
{
	printf("%s\n", ft_strdup(argv[1]));
	return 0;
}
