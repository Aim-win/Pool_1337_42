/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahdam <momahdam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 10:58:09 by momahdam          #+#    #+#             */
/*   Updated: 2025/08/07 16:52:39 by momahdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*st;

	st = (int *)malloc(sizeof(int) * length);
	if (st == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		st[i] = (*f)(tab[i]);
		i++;
	}
	return (st);
}
