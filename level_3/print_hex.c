#include <unistd.h>
#include <stdlib.h>

void print_hex(int n)
{
	if (n >= 16)
		print_hex(n / 16);
	n = n % 16;
	n += n < 10 ? '0' : 'a' - 10;
	write(1, &n, 1);
}

int main(int argc, char const *argv[])
{
	print_hex(atoi(argv[1]));
	return 0;
}
