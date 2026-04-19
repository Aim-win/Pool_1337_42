/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahdam <momahdam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 12:25:06 by momahdam          #+#    #+#             */
/*   Updated: 2025/08/07 12:27:47 by momahdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	checck(int board[10], int x, int y)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (y == board[i] || i + board[i] == x + y || i - board[i] == x - y)
			return (0);
		i++;
	}
	return (1);
}

void	solve(int board[10], int *res, int pos)
{
	int	i;
	int	j;

	if (pos == 10)
	{
		*res += 1;
		j = -1;
		while (++j < 10)
			ft_putchar(board[j] + '0');
		ft_putchar('\n');
	}
	else
	{
		i = -1;
		while (++i < 10)
		{
			if (checck(board, pos, i))
			{
				board[pos] = i;
				solve(board, res, pos + 1);
			}
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10];
	int	i;
	int	res;

	i = 0;
	while (i < 10)
	{
		board[i] = -1;
		i++;
	}
	res = 0;
	solve(board, &res, 0);
	return (res);
}
