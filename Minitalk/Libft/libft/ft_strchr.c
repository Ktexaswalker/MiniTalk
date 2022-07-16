/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartine <hmartine@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:01:11 by hmartine          #+#    #+#             */
/*   Updated: 2022/07/16 23:16:13 by hmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include<string.h>
#include<stdio.h>
#include<unistd.h>

char*	ft_strchr(const char* s, int c);
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*p;

	c = (char) c;
	p = (char *)s;
	while (*p != c)
	{
		if (*p == '\0')
			return (NULL);
		p++;
	}
	return (p);
}
