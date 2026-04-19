/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahdam <momahdam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 16:54:08 by momahdam          #+#    #+#             */
/*   Updated: 2025/08/03 17:39:26 by momahdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	n;
	int	size;

	size = max - min;
	if (size <= 0)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(size * sizeof(int));
	if (*range == NULL)
		return (0);
	n = min;
	i = 0;
	while (n < max)
	{
		(*range)[i] = n;
		i++;
		n++;
	}
	return (size);
}
/*
#include <stdio.h>
int main ()
{
	int nb;
	int min = 13;
	int max = 20;
	int **range;

	ft_ultimate_range(range, min ,max);
	int i = 0;
	while (i < max - min)
	{
		printf("%d\n", (*range)[i]);
		i++;
	}
}*/