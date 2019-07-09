#include <unistd.h>

int ft_rot13(char c)
{
	if (c >= 'A' && c <= 'Z')
		{c += 13;
		if (c > 90)
			c -= 26;}
	else if (c >= 'a' && c <= 'z')
		{
			c -= 32;
			c += 13;
		if (c > 90)
			c -= 26;
			c += 32;
		}
	return (c);
}

int main(int argc, char const *argv[])
{
	if (argc == 2)
	{int i;
	char buf;
	i = 0;
	while (argv[1][i])
	{
		buf = ft_rot13(argv[1][i++]);
		write(1, &buf, 1);
	}
	}
	write(1, "\n", 1);
	return 0;
}
