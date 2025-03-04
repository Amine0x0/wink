#include <unistd.h>
int  ft_putchar(char c)
{
	write (1,&c,1);
}
int btnbr(int i)
{
	
	if (i > 9)
	{
		btnbr(i / 10);
		btnbr(i % 10);
	}
	else
                ft_putchar(i + '0');

}
int main()
{
	int i = 1;
	while(i <=  100)
	{
	if (i % 3 == 0 && i % 5 == 0)
		write(1,"fizzbuzz\n",9);
	else if (i % 3 == 0)
		write(1,"fizz\n",5);
	else if (i % 5 == 0)
		write(1,"buzz\n",5);
	else
	{	
		btnbr(i);
		write(1,"\n",1);
	}
		
	i++;
	}
}	
	

	

