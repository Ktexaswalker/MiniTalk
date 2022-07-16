/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartine <hmartine@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 22:22:24 by hmartine          #+#    #+#             */
/*   Updated: 2022/07/16 23:13:46 by hmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include<string.h>
#include<stdio.h>
#include<unistd.h>

void*	ft_memcpy(void* dst, const void* src, size_t n);
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	num;

	if (!dst && !src)
		return (dst);
	num = 0;
	if (n)
	{
		while (num < n)
		{
			((unsigned char *)dst)[num] = ((unsigned char *)src)[num];
			num++;
		}
	}
	return (dst);
}
