/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahdam <momahdam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 22:40:46 by momahdam          #+#    #+#             */
/*   Updated: 2025/07/21 13:09:45 by momahdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
				ft_swap(&tab[i], &tab[i + 1]);
			i++;
		}
		size--;
	}
}
/*
#include <stdio.h> 
int	main()
{
	int t[] = {810,15,144,1337,42,1,2,8,3,0,-1};
	int s = sizeof(t) / sizeof(t[0]);
	ft_sort_int_tab(t, s);
	
	int i = 0;
	while (i < s)
	{
		printf("%d, ",t[i]);
		i++;
	}
	printf("\n");
}*/