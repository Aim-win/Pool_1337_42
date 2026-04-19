/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahdam <momahdam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 21:23:06 by momahdam          #+#    #+#             */
/*   Updated: 2025/07/26 15:54:39 by momahdam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}
/*
#include<stdio.h>
int main() {
    
    char s1[] = "1337cc88811";
    char s2[] = "1337cc88811";
    
    int res = ft_strcmp(s1, s2);
    if (res == 0)
        printf("Equal\n");
    else
        printf("Unequal\n");
  
    return 0;
}*/