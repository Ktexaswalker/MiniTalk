/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartine <hmartine@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 18:28:30 by hmartine          #+#    #+#             */
/*   Updated: 2022/02/12 14:29:08 by hmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include<string.h>
#include<stdio.h>
#include<unistd.h>

void*	ft_memmove(void* dst, const void* src, size_t len);
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char			*p1;
	const unsigned char		*p2;
	size_t					num;

	num = 0;
	p1 = ((unsigned char *)dst);
	p2 = ((unsigned char *)src);
	if (!dst && !src)
		return (NULL);
	if (p1 > p2)
	{
		while (++num <= len)
			p1[len - num] = p2[len - num];
	}
	else
	{
		while (len-- > 0)
			*(p1++) = *(p2++);
	}
	return (dst);
}

/*
int	main(void)
{
	char	a[20] = "Hola que tal?";
	char	aa[20] = "Como estas tu?";
	char	b[20] = "Hola que tal?";
	char	bb[20] = "Como estas tu?";

	printf("Original: %s, %s\n", aa, a);
	printf("-> %s\n", memmove(aa, a, 10));
	printf("Creada:   %s, %s\n", bb, b);
	printf("-> %s\n", ft_memmove(bb, b, 10));

	return (0);
}
*/
