#include <unistd.h>

int ft_atoi (char *ch)
{
	int i = 0;
	int sign = 1;
	int sum = 0;

	if(ch[i] == ' ' || ch[i] == '\v' || ch[i] == '\n' || ch[i] == '\t')
		i++;
	if (ch[i] == '-' || ch[i] == '+')
	{
		if (ch[i] == '-' )
			sign = -1;
		i++;
	}
	while(ch[i] && ch[i] >= '0' && ch[i] <= '9')
		sum = sum * 10 + (ch[i++] - '0');
	return(sum * sign);
}

void	ft_putnbr(int nbr)
{
	char	c;

	if (nbr < 0)
	{
		nbr = -nbr;
		write(1, "-", 1);
	}
	if (nbr < 10)
	{
		c = nbr + '0';
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
}

int main(int argc, char *argv[])
{
	int i = 1;
	int nbr = 0;
	char c;
	nbr = ft_atoi(argv[1]);

	while(i <= 9)
	{
		c = i + '0';
		write(1, &c, 1);
		write(1, " x ", 3);
		ft_putnbr(nbr);
		write(1, " = ", 3);
		ft_putnbr(nbr * i);
		write(1, "\n", 1);
		i++;
	}
	return 0;
}
