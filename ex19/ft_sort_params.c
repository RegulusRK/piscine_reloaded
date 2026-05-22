#include<unistd.h>

void ft_putchar(char ltt)
{
	write(1, &ltt, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}	

int	ft_strcmp( char *s1, char *s2)
{
	int	i;

	i = 0;
	while(s1[i] == s2[i] && s1[i])
		i++;
	return((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(int argc, char **argv)
{
	if(argc > 1)
	{
		int	i;
		int	j;

		i = 1;
		while(i < argc)
		{
			j = 1;
			while(j < argc - 1)
			{
				if (ft_strcmp(argv[j], argv[j + 1]) > 0)
					ft_swap(&argv[j], &argv[j +  1]);
				j++;
			}
			i++;
		}
		i = 1;
		while(i < argc)
		{
			ft_putstr(argv[i]);
			ft_putchar('\n');
			i++;
		}
		return (0);
	}
}
