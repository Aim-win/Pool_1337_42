/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahdam <momahdam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:45:01 by momahdam          #+#    #+#             */
/*   Updated: 2025/07/30 00:55:41 by momahdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha(char c)
{
	if ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	w;

	w = 1;
	i = 0;
	while (str[i])
	{
		if (is_alpha(str[i]) || (str[i] >= '0' && str[i] <= '9'))
		{
			if (w && str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
				w = 0;
			}
			else if (!w && str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			else
				w = 0;
		}
		else
			w = 1;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
    char str[] = "hi, how are you? 42words forty-two; fifty+and+one";
    printf("%s\n", ft_strcapitalize(str));
    return 0;
}*/