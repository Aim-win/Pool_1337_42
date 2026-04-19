/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahdam <momahdam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 08:33:04 by momahdam          #+#    #+#             */
/*   Updated: 2025/07/28 18:13:09 by momahdam         ###   ########.fr       */
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
/*
#include <stdio.h>
int main()
{
	int b = ft_is_prime(10);
	printf("%d\n", b);
}*/