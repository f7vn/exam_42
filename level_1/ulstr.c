#include <unistd.h>

int main(int argc, char *argv[])
{
	int i = 0;
	char c;
	if(argc == 2)
	{while (argv[1][i])
	{
		c = argv[1][i];
		if (c >= 'A' && c <= 'Z')
			c += 32;
		else if (c >= 'a' && c <= 'z')
				c -= 32;
		i++;
		write(1, &c , 1);
	}}
	write(1, "\n", 1);
	return (0);
}
