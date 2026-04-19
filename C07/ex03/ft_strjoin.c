/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahdam <momahdam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 22:06:55 by momahdam          #+#    #+#             */
/*   Updated: 2025/08/03 23:51:36 by momahdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	strl(char *str)
{
	int	l;

	l = 0;
	while (str[l])
		l++;
	return (l);
}

char	*ft_alloc_str(int size, char **strs, char *sep)
{
	int		total_len;
	int		i;
	char	*str;

	total_len = 0;
	i = 0;
	while (i < size)
		total_len += strl(strs[i++]);
	total_len += strl(sep) * (size - 1);
	str = malloc(total_len + 1);
	if (!str)
		return (NULL);
	return (str);
}

char	*empty_str(void)
{
	char	*str;

	str = malloc(1);
	if (!str)
		return (NULL);
	*str = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		a;
	int		b;

	if (!size)
		return (empty_str());
	str = ft_alloc_str(size, strs, sep);
	i = 0;
	a = 0;
	while (a < size)
	{
		b = 0;
		while (strs[a][b])
			str[i++] = strs[a][b++];
		if (a < size - 1 && sep)
		{	
			b = 0;
			while (sep[b])
				str[i++] = sep[b++];
		}
		a++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>
int main() {
    char *strs[] = {"I will learn", "C", "Programming"," in 1337"};
    char *sep = "	";
    char *res = ft_strjoin(3, strs, sep);
    printf("%s\n", res);  
    free(res);
    return 0;
}*/