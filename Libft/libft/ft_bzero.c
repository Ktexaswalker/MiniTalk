/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartine <hmartine@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 20:16:22 by hmartine          #+#    #+#             */
/*   Updated: 2022/02/06 19:10:32 by hmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include<strings.h>
#include<unistd.h>
#include<stdio.h>

void	ft_bzero(void* s, size_t n);
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n > 0)
	{	
		*(p++) = 0;
		n--;
	}
}

/*
int	main(void)
{
	char s[20] = "Hola que ase?";
	char ss[20] = "Hola que ase?";
	printf("Original: %s\n", s);
	printf("Creada:   %s\n", ss);
	bzero(s, 1);
	ft_bzero(ss, 1);
	printf("Original: %s\n", s);
	printf("Creada:   %s\n", ss);
	return (0);
}
*/
