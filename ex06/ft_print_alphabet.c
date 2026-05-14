/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafcrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 14:22:26 by rafcrist          #+#    #+#             */
/*   Updated: 2026/05/14 14:46:17 by rafcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char lt)
{
	write(1, &lt, 1);
}

void	ft_print_alphabet(void)
{
	char	ltt;

	ltt = 'a';
	while (ltt <= 'z')
	{
		ft_putchar(ltt);
		ltt++;
	}
}
