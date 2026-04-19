/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahdam <momahdam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 10:37:47 by momahdam          #+#    #+#             */
/*   Updated: 2026/04/19 10:37:48 by momahdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	ft_init(int argc, char *argv)
{
	t_map	map;

	map = ft_get_map(argc, argv);
	if (!map.is_valid)
	{
		ft_error_map();
		ft_free_map(map);
		return (0);
	}
	else if (map.is_valid < 0)
	{
		ft_error_map();
		return (0);
	}
	ft_solver(map);
	ft_print_solution(map);
	ft_free_map(map);
	return (1);
}

char	**ft_copy(char **array_map)
{
	char	**new_array;
	int		i;
	int		array_len;

	i = 0;
	array_len = 0;
	while (array_map[array_len])
		array_len++;
	new_array = malloc(sizeof(char *) * (array_len + 1));
	while (array_map[i])
	{
		new_array[i] = ft_strdup(array_map[i]);
		i++;
	}
	new_array[array_len] = 0;
	return (new_array);
}

int	x_size(char **matrix)
{
	int	size;

	size = 0;
	while (matrix[size])
		size++;
	return (size);
}

int	y_size(char **matrix)
{
	int	size;

	size = 0;
	while (matrix[0][size])
		size++;
	return (size);
}
