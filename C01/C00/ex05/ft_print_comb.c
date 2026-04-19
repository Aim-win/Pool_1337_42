/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahdam <momahdam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 13:10:43 by momahdam          #+#    #+#             */
/*   Updated: 2025/07/22 17:23:13 by momahdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	trio(int d1, int d2, int d3)
{
	ft_putchar(d1 + '0');
	ft_putchar(d2 + '0');
	ft_putchar(d3 + '0');
	if (d1 != 7 || d2 != 8 || d3 != 9)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	dig1;
	int	dig2;
	int	dig3;

	dig1 = 0;
	while (dig1 <= 7)
	{
		dig2 = dig1 + 1;
		while (dig2 <= 8)
		{
			dig3 = dig2 + 1;
			while (dig3 <= 9)
			{
				if (dig1 != dig2 && dig2 != dig3)
				{
					trio(dig1, dig2, dig3);
				}
				dig3++;
			}
			dig2++;
		}
		dig1++;
	}
}
/*
int main()
{
    ft_print_comb();
    return 0;
}*/