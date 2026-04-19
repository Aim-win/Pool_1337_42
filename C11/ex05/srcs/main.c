/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahdam <momahdam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 18:12:03 by momahdam          #+#    #+#             */
/*   Updated: 2025/08/07 18:12:06 by momahdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	operator(int a, char *op, int b)
{
	int	result;
	int	(*operator[5])(int, int);

	result = 1;
	operator[0] = &ft_add;
	operator[1] = &ft_sub;
	operator[2] = &ft_mul;
	operator[3] = &ft_div;
	operator[4] = &ft_mod;
	if (op[0] == '+')
		result = operator[0](a, b);
	else if (op[0] == '-')
		result = operator[1](a, b);
	else if (op[0] == '*')
		result = operator[2](a, b);
	else if (op[0] == '/')
		result = operator[3](a, b);
	else if (op[0] == '%')
		result = operator[4](a, b);
	return (result);
}

void	do_op(char *fst_nbr, char *op, char *snd_nbr)
{
	int	a;
	int	b;
	int	result;

	a = ft_atoi(fst_nbr);
	b = ft_atoi(snd_nbr);
	result = 1;
	if (!(op[0] == '+' || op[0] == '-'
			|| op[0] == '/' || op[0] == '%'
			|| op[0] == '*'))
		ft_putchar('0');
	else if (op[0] == '/' && b == 0)
		ft_putstr("Stop : division by zero");
	else if (op[0] == '%' && b == 0)
		ft_putstr("Stop : modulo by zero");
	else
	{
		result = operator(a, op, b);
		ft_putnbr(result);
	}
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	if (ac == 4)
		do_op(av[1], av[2], av[3]);
	return (0);
}
