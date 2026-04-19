/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahdam <momahdam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 10:02:08 by momahdam          #+#    #+#             */
/*   Updated: 2025/07/24 23:35:15 by momahdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *s)
{
	unsigned int	l;

	l = 0;
	while (s[l])
		l++;
	return (l);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;

	dest_len = ft_strlen(dest);
	i = dest_len;
	j = 0;
	if (size <= dest_len)
		return (ft_strlen(src) + size);
	while (src[j] && i < size - 1)
	{
		dest[i++] = src[j++];
	}
	dest[i] = '\0';
	return (dest_len + ft_strlen(src));
}
