/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafcrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 18:28:28 by rafcrist          #+#    #+#             */
/*   Updated: 2026/05/14 18:56:31 by rafcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void	ft_putchar(char ltt)
{
	write(1, &ltt, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	
	j = 1;

	if (argc >= 2)
	{
		while (argv[j])
		{
			i = 0;
			while (argv[j][i])
			{
				ft_putchar(argv[j][i]);
				i++;
			}
			ft_putchar('\n');
			j++;
		}
	}
	return (0);
}
