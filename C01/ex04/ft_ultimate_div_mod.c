/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahdam <momahdam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 17:43:11 by momahdam          #+#    #+#             */
/*   Updated: 2025/07/17 18:23:48 by momahdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;

	div = *a / *b;
	*b = *a % *b;
	*a = div;
}

/*
#include <stdio.h>
int main()
{
	int a = 42;
	int b = 2;

	printf("a = %d and b = %d\n",a,b);
	ft_ultimate_div_mod(&a, &b);
	printf("a = %d and b = %d",a,b);
	return 0;
}*/