/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartine <hmartine@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 20:19:47 by hmartine          #+#    #+#             */
/*   Updated: 2022/07/16 23:17:05 by hmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include<string.h>
#include<stdio.h>
#include<unistd.h>

int	ft_strncmp(const char* s1, const char* s2, size_t n);
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			num;

	num = 0;
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	if (n > 0)
	{
		if (p1[num] != p2[num])
			return (p1[num] - p2[num]);
		while ((num < n - 1) && (p1[num] != '\0') && (p1[num] == p2[num]))
		{
			num++;
			if (p1[num] != p2[num])
				return (p1[num] - p2[num]);
		}
	}
	return (0);
}
