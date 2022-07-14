/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartine <hmartine@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 19:39:02 by hmartine          #+#    #+#             */
/*   Updated: 2022/02/06 18:32:29 by hmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include<stdio.h>
#include<ctype.h>

int	ft_isascii(int c);
*/

#include "libft.h"

int	ft_isascii(int c)
{
	if ((c >= 0) && (c <= 127))
	{
		return (1);
	}
	return (0);
}

/*
int	main(void)
{
	printf("Funcion original: %d, %d, %d, %d\n"\
	, isascii('1'), isascii('Z'), isascii(191), isascii('\0'));
	printf("Funcion creada:   %d, %d, %d, %d\n"\
	, ft_isascii('1'), ft_isascii('Z'), ft_isascii(191), ft_isascii('\0'));
}
*/
