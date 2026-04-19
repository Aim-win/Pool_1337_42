/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahdam <momahdam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 11:20:24 by momahdam          #+#    #+#             */
/*   Updated: 2025/08/03 18:32:40 by momahdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	is_sep(char *sp, char c)
{
	int	i;

	i = 0;
	while (sp[i])
	{
		if (sp[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	wc(char *str, char *sep)
{
	int	word;
	int	i;

	i = 0;
	word = 0;
	while (str[i])
	{
		if (!is_sep(sep, str[i]))
		{
			word++;
			while (str[i] && !is_sep(sep, str[i]))
				i++;
		}
		else
			i++;
	}
	return (word);
}

void	*alloc(char *str, char *sep)
{
	char	*word;
	int		i;

	i = 0;
	while (str[i] && !is_sep(sep, str[i]))
		i++;
	word = malloc(i + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (str[i] && !is_sep(sep, str[i]))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		a;
	int		b;
	char	**words;

	a = 0;
	b = 0;
	words = malloc((wc(str, charset) + 1) * sizeof(char *));
	if (!words || !str || !charset)
		return (NULL);
	while (str[a])
	{
		if (!is_sep(charset, str[a]))
		{
			words[b] = alloc(&str[a], charset);
			while (str[a] && !is_sep(charset, str[a]))
				a++;
			b++;
		}
		else
			a++;
	}
	words[b] = 0;
	return (words);
}
