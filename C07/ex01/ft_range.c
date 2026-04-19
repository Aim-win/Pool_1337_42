/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahdam <momahdam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 16:32:40 by momahdam          #+#    #+#             */
/*   Updated: 2025/08/03 18:25:49 by momahdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*arr;

	if (min >= max)
		return (NULL);
	size = max - min;
	arr = malloc(size * sizeof(int));
	if (!arr)
		return (NULL);
	i = 0;
	while (min < max)
		arr[i++] = min++;
	return (arr);
}
/*
#include <stdio.h>
int main ()
{
	int min = -13;
	int max = 50;
	int *tab;
	
	tab = ft_range(min,max);
	int i = 0;
	while (i < max - min)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}*/