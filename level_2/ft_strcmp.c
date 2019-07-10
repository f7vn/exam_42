#include <stdio.h>

int    ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int main(int argc, char const *argv[])
{
	printf("%d\n", ft_strcmp("113111", "112"));
	return 0;
}
