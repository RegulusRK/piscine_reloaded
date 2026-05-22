/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafcrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 14:24:44 by rafcrist          #+#    #+#             */
/*   Updated: 2026/05/22 14:53:21 by rafcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ltt);

void	ft_print_numbers(void)
{
	char	zero;

	zero = '0';
	while (zero <= '9')
	{
		ft_putchar(zero);
		zero++;
	}
}
