#include <stdio.h>

int	ft_atoi(const char *str)
{
	int sign = 1;
	int i = 0;
	int sum = 0;
	int n = 1;
	while(str[i] == '\t' || str[i] == ' ' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
		sum = sum * 10 + str[i++] - '0';
	return (sum * sign);
}

int main(int argc, char const *argv[])
{
	int i = ft_atoi(argv[1]);
	printf("%d\n", i*2);
	return (0);
}
