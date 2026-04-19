/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahdam <momahdam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 02:19:08 by momahdam          #+#    #+#             */
/*   Updated: 2025/07/31 16:54:50 by momahdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_hex(unsigned long nb, unsigned int len)
{
	char	*hex_digits;
	char	result[16];
	int		i;
	int		j;

	hex_digits = "0123456789abcdef";
	i = 0;
	while ((unsigned int)i < len)
		result[i++] = '0';
	i = 0;
	while (nb > 0)
	{
		result[i++] = hex_digits[nb % 16];
		nb /= 16;
	}
	j = len - 1;
	while (j >= 0)
	{
		if (j + 1 > i)
			write(1, "0", 1);
		else
			write(1, result + j, 1);
		j--;
	}
}

void	ft_write_printable(unsigned char *str, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (str[i] >= 32 && str[i] != 127)
			write(1, str + i, 1);
		else
			write(1, ".", 1);
		i++;
	}
}

void	ft_print_char_hex_rows(unsigned char *bytes, int offset, int size)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (offset + i < size)
			ft_print_hex(bytes[offset + i], 2);
		else
			write(1, "  ", 2);
		if (offset + i + 1 < size)
			ft_print_hex(bytes[offset + i + 1], 2);
		else
			write(1, "  ", 2);
		write(1, " ", 1);
		i += 2;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	offset;
	unsigned char	*bytes;

	bytes = addr;
	offset = 0;
	while (offset < size)
	{
		ft_print_hex((unsigned long)bytes + offset, 16);
		write(1, ": ", 2);
		ft_print_char_hex_rows(bytes, offset, size);
		if ((size - offset) >= 16)
			ft_write_printable(bytes + offset, 16);
		else
			ft_write_printable(bytes + offset, size - offset);
		write(1, "\n", 1);
		offset += 16;
	}
	return (addr);
}
