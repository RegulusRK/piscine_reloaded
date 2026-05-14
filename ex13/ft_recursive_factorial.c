/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafcrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 14:51:37 by rafcrist          #+#    #+#             */
/*   Updated: 2026/05/14 16:54:39 by rafcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb > 0)
	{
		while (nb != 1)
			return (nb * ft_recursive_factorial(nb - 1));
	}
	else
		return (0);
}

int	main(void)
{
	printf("%d", ft_recursive_factorial(3));
	return (0);
}
