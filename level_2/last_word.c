#include <unistd.h>
#include <stdio.h>

void last_word(char *str)
{
    int i = 0;
    int len = 0;
    while (str[len])
        len++;
    len--;
    while (len && (str[len] == '\t' || str[len] == '\n' || str[len] == ' '))
        len--;
    i = len;
    while (len && !(str[len] == '\t' || str[len] == '\n' || str[len] == ' '))
        len--;
    len++;
    while(len <= i)
    {
		write(1, &str[len], 1);
        len++;
	}
	write(1, "\n", 1);
}


int main(int argc, char *argv[])
{
    last_word(argv[1]);
    return 0;
}
