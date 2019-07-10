#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int res;
	if(argc == 4)
	{
		if(argv[2][0] == '+')
			res = atoi(argv[1]) + atoi(argv[3]);
		else if(argv[2][0] == '-')
			res = atoi(argv[1]) - atoi(argv[3]);
		else if(argv[2][0] == '*')
			res = atoi(argv[1]) * atoi(argv[3]);
		else if(argv[2][0] == '/')
			res = atoi(argv[1]) / atoi(argv[3]);
		printf("%d", res);
	}
	printf("\n");
	return (0);
}
