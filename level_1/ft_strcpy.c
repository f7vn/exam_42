#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i] && s1[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int main(int argc, char *argv[])
{
	char s1[] = "1233414";
	char s2[] = "qwertyuio";
	printf("%s\n", ft_strcpy(s1, s2));
	return (0);
}
