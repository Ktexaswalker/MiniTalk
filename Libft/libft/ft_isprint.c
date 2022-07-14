/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartine <hmartine@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 20:26:54 by hmartine          #+#    #+#             */
/*   Updated: 2022/02/06 18:33:25 by hmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include<stdio.h>
#include<ctype.h>

int	ft_isprint(int c);
*/

#include "libft.h"

int	ft_isprint(int c)
{
	if ((c >= 32) && (c <= 126))
	{
		return (1);
	}
	return (0);
}

/*
int main(void)
{
	printf("Funcion original: %d, %d, %d, %d, %d\n"\
	, isprint('\0'), isprint(' '), isprint(127)\
	, isprint('A'), isprint('0'));
	printf("Funcion creada:   %d, %d, %d, %d, %d\n"\
	, ft_isprint('\0'), ft_isprint(' '), ft_isprint(127)\
	, ft_isprint('A'), ft_isprint('0'));
}
*/
