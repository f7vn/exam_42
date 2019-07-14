#include <unistd.h>
#include <stdio.h>
int ft_hidenp(char *str1, char *str2)
{
    int i = 0;
    int n = 0;
    while(str1[i] && str2[n])
    {
        if(str1[i] == str2[n])
          i++;
        n++;
    }
    return(!str1[i] ? 1 : 0);
}

int main(int argc, char *argv[])
{
  	if (argc == 3)
    {
		int i = ft_hidenp(argv[1], argv[2]);
		if (i)
    		write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
    return 0;
}
