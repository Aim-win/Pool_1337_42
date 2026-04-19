/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahdam <momahdam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 09:41:05 by momahdam          #+#    #+#             */
/*   Updated: 2025/07/23 09:59:02 by momahdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int	d;

	d = 0;
	while (d <= 9)
	{
		ft_putchar(d + '0');
		d++;
	}
}
/*
int main()
{
    ft_print_numbers();
    return 0;
}*/
