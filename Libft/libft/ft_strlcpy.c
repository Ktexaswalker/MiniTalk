/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartine <hmartine@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 20:25:45 by hmartine          #+#    #+#             */
/*   Updated: 2022/02/06 20:44:39 by hmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include<string.h>
#include<stdio.h>
#include<unistd.h>

size_t	ft_strlcpy(char* dst, const char* src, size_t dstsize);
*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;

	len = 0;
	i = 0;
	if (dstsize > 0)
	{
		while ((src[i] != '\0') && (i < dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[len] != '\0')
		len++;
	return (len);
}

/*
int	main(void)
{
	char	a[20] = "Hola que tal?";
	char	b[20] = "Como estas tu?";

	printf("strlcpy(Hola que tal?, Como estas tu?, 10)\n");
	printf("strlcpy(13c, 14c, 10)\n");
	printf("Original: %lu\n", strlcpy(a, b, 10));
	printf("Creada: %lu\n", ft_strlcpy(a, b, 10));
	return (0);
}
*/
