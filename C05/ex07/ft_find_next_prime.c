/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahdam <momahdam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 17:57:37 by momahdam          #+#    #+#             */
/*   Updated: 2025/07/28 18:14:02 by momahdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	x;

	if (nb < 2)
		return (0);
	else
	{
		x = 2;
		while (x < nb)
		{
			if (nb % x == 0)
				return (0);
			x++;
		}
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	pr;

	pr = nb;
	while (!ft_is_prime(pr))
		pr++;
	return (pr);
}
/*
#include <stdio.h>
int main()
{
	int pr = ft_find_next_prime(5);
	printf("%d\n",pr);
}*/