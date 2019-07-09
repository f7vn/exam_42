#include <unistd.h>

int main(int argc, char const *argv[]) {
	int count;
	int i;

	count = 0;
	if (argc == 2)
	{
		while (argv[1][count])
			count++;
		while (count)
			write(1, &argv[1][--count], 1);
	}
	write (1, "\n", 1);
	return 0;
}
