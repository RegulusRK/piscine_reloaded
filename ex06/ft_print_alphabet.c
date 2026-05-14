#include <unistd.h>

void ft_putchar(char lt)
{
	write(1, &lt, 1);
}

void ft_print_alphabet(void)
{
	char	ltt;

	ltt = 'a';
	while (ltt <= 'z')
	{
		ft_putchar(ltt);
		ltt++;
	}
}

int main(void)
{
	ft_print_alphabet();
	return (0);
}
