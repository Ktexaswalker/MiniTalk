/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartine <hmartine@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 19:44:13 by hmartine          #+#    #+#             */
/*   Updated: 2022/07/16 23:16:37 by hmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include<string.h>
#include<stdio.h>
#include<unistd.h>

char*	ft_strrchr(const char* s, int c);
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;

	c = (unsigned char) c;
	p = (char *)s;
	while (*p != '\0')
		p++;
	while (*p != c)
	{
		if (*p == *s)
			return (NULL);
		p--;
	}
	return (p);
}
