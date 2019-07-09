#include <unistd.h>

int main(int argc, char const *argv[])
{
	write (1, "9876543210\n", 11);
	return (0);
}
