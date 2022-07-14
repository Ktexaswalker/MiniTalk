/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartine <hmartine@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 12:40:37 by hmartine          #+#    #+#             */
/*   Updated: 2022/02/12 16:53:12 by hmartine         ###   ########.fr       */
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

/*
int	main(void)
{
	char	a[20] = "Hola que tal?";
	char	b[20] = "HolaAcomo estas?";
	char	aa[20] = "Hola que tal?";
	char	bb[20] = "HolaAcomo estas?";
	char	c[20] = "ADCD";
	char	d[20] = "ABDCE";
	char	cc[20] = "ADCD";
	char	dd[20] = "ABDCE";

	printf("Original: %d\n", memcmp(a, b, 5));
	printf("Creada:   %d\n", ft_memcmp(aa, bb, 5));
	printf("Original: %d\n", memcmp(c, d, 20));
	printf("Creada;   %d\n", ft_memcmp(cc, dd, 20));
	return (0);
}
*/
