#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int main(int argc, char const *argv[])
{
	char c[] = "qwerty   ";
	printf("%d\n", ft_strlen(c));
	return 0;
}
