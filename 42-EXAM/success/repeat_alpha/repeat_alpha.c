#include <unistd.h>

int main(int ac,char *av[])
{
	int i = 0;
	int j = 1;
	if (ac == 2)
	{
		while (av[1][i])
		{
			j = 1;
			if(av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				j = av[1][i] - 96;
			}
			if(av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				j = av[1][i] -64;
			}	
			while (j > 0)
			{
				write(1,&av[1][i],1);
				j--;
			}
		i++;
		}
	}
	write (1,"\n",1);
}

