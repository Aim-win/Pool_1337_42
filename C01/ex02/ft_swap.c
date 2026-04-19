/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahdam <momahdam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 14:57:01 by momahdam          #+#    #+#             */
/*   Updated: 2025/07/17 18:22:16 by momahdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*
#include <stdio.h>
int main(){
	int a = 1;
	int b = 3;
	
	printf("a = %d \nb = %d\n",a,b);
	ft_swap(&a,&b);
	printf("a = %d \nb = %d\n",a,b);

	return 0;
}*/
