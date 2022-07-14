/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartine <hmartine@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 14:25:20 by hmartine          #+#    #+#             */
/*   Updated: 2022/02/12 19:15:23 by hmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

void*	ft_calloc(size_t count, size_t size);
*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;
	size_t			n;
	size_t			i;

	i = 0;
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	n = size * count;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
	return (ptr);
}

/*
int	main(void)
{
	char*	str;
	int		i;

	printf("Original\n");
	i = 0;
	str = calloc(2, sizeof(char));
	while (i < 3)
	{
		if (str[i] != '\0')
			printf("No es nulo\n");
		else
			printf("Es nulo\n");
		i++;
	}
	printf("Creada\n");
	i = 0;
	str = ft_calloc(2, sizeof(char));
	while (i < 3)
	{
		if (str[i] != '\0')
			printf("No es nulo\n");
		else
			printf("Es nulo\n");
		i++;
	}
}
*/
