/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahdam <momahdam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 11:11:02 by momahdam          #+#    #+#             */
/*   Updated: 2025/08/07 18:14:30 by momahdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	inc;
	int	dec;

	inc = 1;
	dec = 1;
	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
		{
			inc = 0;
		}
		if (f(tab[i], tab[i + 1]) < 0)
		{
			dec = 0;
		}
		i++;
	}
	if (inc || dec)
		return (1);
	return (0);
}
