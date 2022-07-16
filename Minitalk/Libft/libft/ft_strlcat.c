/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartine <hmartine@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 22:18:13 by hmartine          #+#    #+#             */
/*   Updated: 2022/07/16 23:14:54 by hmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include<string.h>
#include<stdio.h>
#include<unistd.h>

size_t	ft_strlcat(char* dst, const char* src, size_t dstsize);
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lendst;
	size_t	lensrc;
	size_t	i;

	lendst = 0;
	lensrc = 0;
	i = 0;
	while (dst[lendst] != '\0')
		lendst++;
	while (src[lensrc] != '\0')
		lensrc++;
	if (dstsize == 0)
		return (lensrc);
	if (dstsize < lendst + 1)
		return (lensrc + dstsize);
	while (dstsize && (--dstsize - lendst) && src[i] != '\0')
	{
		dst[lendst + i] = src[i];
		i++;
	}
	dst[lendst + i] = '\0';
	return (lendst + lensrc);
}
