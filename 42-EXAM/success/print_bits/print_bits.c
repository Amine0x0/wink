#include <unistd.h>
void	print_bits(unsigned char octet)
{
	int b = 128;
	while (b)
	{
		(b & octet) ? write(1,"1",1) : write(1,"0",1);
		b /= 2;
	}

}
