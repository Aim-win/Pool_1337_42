/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahdam <momahdam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 17:30:02 by momahdam          #+#    #+#             */
/*   Updated: 2025/07/17 18:22:29 by momahdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>
int main(){
	int a = 2004;
	int b = 5;
	int d, m;
	int *div = &d, *mod = &m;

	ft_div_mod(a,b,div,mod);
	printf("%d / %d = %d, and the rest is %d",a,b,d,m);
	return 0;
}*/