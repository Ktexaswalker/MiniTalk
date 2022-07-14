/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartine <hmartine@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 16:49:14 by hmartine          #+#    #+#             */
/*   Updated: 2022/02/06 19:18:21 by hmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <ctype.h>
#include <stdio.h>

int	ft_isdigit(int c);
*/

#include "libft.h"

int	ft_isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	return (0);
}

/*

int main(void)
{
	printf("Funcion original: %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n"\
	, isdigit('0')\
	, isdigit('1')\
	, isdigit('2')\
	, isdigit('3')\
	, isdigit('4')\
	, isdigit('5')\
	, isdigit('6')\
	, isdigit('7')\
	, isdigit('8')\
	, isdigit('9')\
	, isdigit('-'));

	printf("Funcion creada:   %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n"\
	, ft_isdigit('0')\
	, ft_isdigit('1')\
	, ft_isdigit('2')\
	, ft_isdigit('3')\
	, ft_isdigit('4')\
	, ft_isdigit('5')\
	, ft_isdigit('6')\
	, ft_isdigit('7')\
	, ft_isdigit('8')\
	, ft_isdigit('9')\
	, ft_isdigit('-'));
}

*/
