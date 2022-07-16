/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartine <hmartine@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 16:54:35 by hmartine          #+#    #+#             */
/*   Updated: 2022/07/16 23:19:26 by hmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

char*	ft_strdup(const char* s1);
*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		c;
	char	*str;
	int		i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	c = 0;
	str = (char *)malloc(sizeof(char) * i + 1);
	if (!str)
		return (NULL);
	while (s1[c] != '\0')
	{
		str[c] = s1[c];
		c++;
	}
	str[c] = '\0';
	return ((char *)str);
}
