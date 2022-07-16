/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartine <hmartine@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 12:40:37 by hmartine          #+#    #+#             */
/*   Updated: 2022/07/16 23:17:49 by hmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include<string.h>
#include<stdio.h>
#include<unistd.h>

int	ft_memcmp(const void* s1, const void* s2, size_t n);
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (n > 0)
	{
		if ((*p1 > *p2) || (*p2 > *p1))
			return ((unsigned char) *p1 - (unsigned char) *p2);
		p1++;
		p2++;
		n--;
	}
	return (0);
}
