/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartine <hmartine@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 21:45:03 by hmartine          #+#    #+#             */
/*   Updated: 2022/02/06 19:28:47 by hmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include<string.h>
#include<stdio.h>
#include<unistd.h>

void*	ft_memset(void* b, int c, size_t len);
*/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *)b;
	while (len > 0)
	{
		*(p++) = (unsigned char) c;
		len--;
	}
	return (b);
}

/*
int	main(void)
{
	char	b[20] = "Hola que ase?";
	char	bb[20] = "Hola que ase?";
	printf("Original: %s\n", memset(b, 65, 5));
	printf("Creado:   %s\n", ft_memset(bb, 65, 5));
	printf("Original: %s\n", memset(b, 122, 10));
	printf("Creado:   %s\n", ft_memset(bb, 122, 10));
	return (0);
}
*/
