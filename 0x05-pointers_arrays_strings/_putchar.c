#include <unistd>


int _puchar(char c)
{
	return (write(1 , &c, 1));
}
