/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahdam <momahdam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 16:56:11 by momahdam          #+#    #+#             */
/*   Updated: 2025/07/27 20:43:57 by momahdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	t;
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	else if (power > 0)
	{
		t = 0;
		while (t < power)
		{
			res *= nb;
			t++;
		}
	}
	return (res);
}
/*
#include <stdio.h>
int main()
{
	printf("%d\n", ft_iterative_power(7,0));
}*/