#include <unistd.h>

int ft_to_lower(char c)
{
	int i;

	i = 1;
	if (c >= 'A' && c <= 'Z')
		i = c - 64;
	else if (c >= 'a' && c <= 'z')
		i = c - 96;
	return (i);
}

int main(int argc, char const *argv[])
{
	int i;
	int count;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			count = ft_to_lower(argv[1][i]);
			while (count--)
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
