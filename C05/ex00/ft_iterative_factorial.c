/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahdam <momahdam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 16:35:23 by momahdam          #+#    #+#             */
/*   Updated: 2025/07/27 16:55:33 by momahdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fact;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		fact = 1;
		i = nb;
		while (i > 0)
		{
			fact *= i;
			i--;
		}
		return (fact);
	}
}
/*
#include <stdio.h>
int main()
{
	printf("%d\n",ft_iterative_factorial(1));
}*/