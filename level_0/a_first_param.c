#include <unistd.h>

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc == 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
	while (argv[1][i])
		i++;
	write(1, argv[1], i);
	write(1, "\n", 1);
	return (0);
}
