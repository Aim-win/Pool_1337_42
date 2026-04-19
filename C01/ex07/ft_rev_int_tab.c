/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahdam <momahdam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 22:50:09 by momahdam          #+#    #+#             */
/*   Updated: 2025/07/21 13:09:02 by momahdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		ft_swap(&tab[i], &tab[j]);
		i++;
		j--;
	}
}
/*
#include <stdio.h>
int main()
{
	int tab[] = {1,2,3,5,10,15,57,42};
	int size = 8;
	
	int i =0;
	while (i < size)
	{
		printf("tab[%d] = %d\n",i, tab[i]);
		i++;
	}
	ft_rev_int_tab(tab, size);
	i = 0;
	
	while (i < size)
	{
		printf("\ntab[%d] = %d",i, tab[i]);
		i++;
	}
}*/
