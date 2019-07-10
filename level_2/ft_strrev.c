#include <stdio.h>

char    *ft_strrev(char *str)
{
	int len = 0;
	int i = -1;
	char tmp;

	while(str[len])
		len++;
	while(++i < --len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
	}
	return (str);
}

int main(int argc, char  *argv[])
{
	printf("%s\n", ft_strrev(argv[1]));
	return 0;
}
