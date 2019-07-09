#include <unistd.h>
int main(int argc, char *argv[])
{
	int i;
	int max;

	i = 0;
	max = 0;
	while(argv[max])
	 	max++;
	if (argc > 1)
	{
		while (argv[max - 1][i])
			i++;
		write(1, argv[max - 1], i);
	}
	write(1, "\n", 1);
	return (0);
}
