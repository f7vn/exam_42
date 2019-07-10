
#include <stdio.h>

int	    is_power_of_2(unsigned int n)
{
	return ((n & -n) == n);
}

int main(int argc, char const *argv[])
{
	printf("%d\n", is_power_of_2(64));
	return 0;
}
