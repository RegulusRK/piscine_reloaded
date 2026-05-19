/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafcrist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 15:56:57 by rafcrist          #+#    #+#             */
/*   Updated: 2026/05/19 17:10:20 by rafcrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
int *ft_range(int min, int max)
{
	int	i;
	int	length;
	int	*nmbrs;

	if (min >= max)
		return (NULL);
	length = (max - min);
	nmbrs = malloc(sizeof(int) * length);
	if (nmbrs == NULL)
		return(NULL);

	i = 0;
	while (i < length)
	{
		nmbrs[i] = min;
		min += 1;
		i++;
	}
	return(nmbrs);
}
