#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}


int main(int argc, char *argv[])
{
	ft_putstr(argv[1]);
	return 0;
}
