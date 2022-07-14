/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartine <hmartine@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:01:11 by hmartine          #+#    #+#             */
/*   Updated: 2022/02/12 19:20:17 by hmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include<string.h>
#include<stdio.h>
#include<unistd.h>

char*	ft_strchr(const char* s, int c);
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*p;

	c = (char) c;
	p = (char *)s;
	while (*p != c)
	{
		if (*p == '\0')
			return (NULL);
		p++;
	}
	return (p);
}

/*
int	main(void)
{
	char	a[20] = "Hola que tal?";
	char	aa[20] = "Hola que tal?";

	printf("Original: %s\n", strchr(a, 111));
	printf("Creada:   %s\n", ft_strchr(aa, 111));
	printf("Original:%s\n",strchr(a, 65));
	printf("Creada:  %s\n", ft_strchr(aa, 65));
	return (0);
}
*/
