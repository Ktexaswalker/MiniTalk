/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartine <hmartine@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 19:01:40 by hmartine          #+#    #+#             */
/*   Updated: 2022/02/06 19:42:05 by hmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include<ctype.h>
#include<stdio.h>
#include<unistd.h>

int	ft_toupper(int c);
*/

#include "libft.h"

int	ft_toupper(int c)
{
	if ((c > 96) && (c < 123))
		c -= 32;
	return (c);
}

/*
int	main(void)
{
	printf("Original: a->%d, A->%d\n",toupper('a'), toupper('A'));
	printf("Creada:   a->%d, A->%d\n", ft_toupper('a'), ft_toupper('A'));
	return (0);
}
*/
