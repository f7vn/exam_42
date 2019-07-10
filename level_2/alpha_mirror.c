#include <unistd.h>

int main(int argc, char const *argv[])
{
	int i = 0;
	char c;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			c = argv[1][i];
			if(c >= 'A' && c <= 'Z')
				c = 'A' + 'Z' - c;
			else if(c >= 'a' && c <= 'z')
				c = 'a' + 'z' - c;
			write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
