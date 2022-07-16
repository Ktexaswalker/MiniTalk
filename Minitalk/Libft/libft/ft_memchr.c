/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartine <hmartine@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 10:56:04 by hmartine          #+#    #+#             */
/*   Updated: 2022/07/16 23:17:24 by hmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include<string.h>
#include<stdio.h>
#include<unistd.h>

void*	ft_memchr(const void* s, int c, size_t n);
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*p;
	size_t	cont;

	cont = 0;
	p = (char *)s;
	while (cont < n)
	{
		if ((unsigned char)p[cont] == (unsigned char)c)
			return ((char *)p + cont);
		cont++;
	}
	return (NULL);
}
