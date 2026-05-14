#include <unistd.h>

void ft_putchar(char ltt)
{
	write(1, &ltt, 1);
}

void ft_print_number(void)
{
	char zero;

	zero = '0';
	while(zero <= '9')
	{
		ft_putchar(zero);
		zero++;
	}
}

int main(void)
{
	ft_print_number();
	return (0);
}
