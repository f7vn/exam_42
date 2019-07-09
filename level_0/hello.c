#include <unistd.h>

int main(int argc, char const *argv[])
{
	write (1, "Hello World!\n", 13);
	return (0);
}
