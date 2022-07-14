/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartine <hmartine@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 22:18:13 by hmartine          #+#    #+#             */
/*   Updated: 2022/02/19 17:49:43 by hmartine         ###   ########.fr       */
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

/*
int	main(void)
{
	char	a[20] = "Hola que tal?";
	char	b[20] = "Como estas tu?";
	char	aa[20] = "Hola que tal?";
	char	bb[20] = "Como estas tu?";

	printf("--------: (dst, src, size)\n");
	printf("Original: (13c, 14c, 15)%lu\n", strlcat(a, b, 15));
	printf("Creada:   (13c, 14c, 15)%lu\n", ft_strlcat(aa, bb, 15));
	printf("Original: (14c, 13c, 15)%lu\n", strlcat(b, a, 15));
	printf("Creada:   (14c, 13c, 15)%lu\n", ft_strlcat(bb, aa, 15));
	printf("Original: (13c, 14c, 00)%lu\n", strlcat(a, b, 0));
	printf("Creada:   (13c, 14c, 00)%lu\n", ft_strlcat(aa, bb, 0));
	printf("Original: (14c, 13c, 00)%lu\n", strlcat(b, a, 0));
	printf("Creada:   (14c, 13c, 00)%lu\n", ft_strlcat(bb, aa, 0));
	return (0);
}
*/
