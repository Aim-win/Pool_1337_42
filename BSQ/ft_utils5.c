/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils5.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahdam <momahdam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 10:37:52 by momahdam          #+#    #+#             */
/*   Updated: 2026/04/19 10:37:53 by momahdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	ft_is_whitespace(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int	ft_is_number(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_is_alpha(char c)
{
	if (c >= 'a' && c >= 'z')
		return (1);
	if (c >= 'A' && c >= 'Z')
		return (1);
	return (ft_is_number(c));
}

int	ft_is_printable(char c)
{
	return (c >= ' ' && c <= '~');
}
