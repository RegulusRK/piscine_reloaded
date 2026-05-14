#include <unistd.h>

void ft_putchar(char ltt)
{
	write(1, &ltt, 1);
}

void ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar('N');
	}
	else
	{
		ft_putchar('P');
	}
}
int main(void)
{
	ft_is_negative(42);
	ft_is_negative(-42);
	ft_is_negative(0);
	ft_is_negative(-1210302);
	return (0);
}
