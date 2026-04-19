/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahdam <momahdam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 06:34:27 by momahdam          #+#    #+#             */
/*   Updated: 2025/07/28 18:20:02 by momahdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	pow2(int nb)
{
	if (nb == 0)
		return (0);
	return (pow2(nb - 1) + (2 * nb) - 1);
}

int	is_perfect_square(int n)
{
	int	i;

	i = 1;
	while (pow2(i) <= n)
	{
		if (pow2(i) == n)
			return (1);
		i++;
	}
	return (0);
}

int	ft_sqrt(int nb)
{
	int	i;

	if (nb == 1)
		return (1);
	else if (is_perfect_square(nb))
	{
		i = 1;
		while (i <= nb / 2)
		{
			if (nb == pow2(i))
				return (i);
			i++;
		}
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	printf("%d\n", ft_sqrt(64));
}*/