/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartine <hmartine@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:53:02 by hmartine          #+#    #+#             */
/*   Updated: 2022/02/06 18:31:25 by hmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int c);
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c > 47 && c < 58) || (c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	return (0);
}

/*
int	main(void)
{
	printf("Funcion original: %d, %d, %d, %d, %d, %d, %d, %d, %d\n"\
	, isalnum('0')\
	, isalnum('9')\
	, isalnum('^')\
	, isalnum('a')\
	, isalnum('z')\
	, isalnum('@')\
	, isalnum('A')\
	, isalnum('Z')\
	, isalnum('['));

	printf("Funcion creada:   %d, %d, %d, %d, %d, %d, %d, %d, %d\n"\
	, ft_isalnum('0')
	, ft_isalnum('9')
	, ft_isalnum('^')
	, ft_isalnum('a')
	, ft_isalnum('z')
	, ft_isalnum('@')
	, ft_isalnum('A')
	, ft_isalnum('Z')
	, ft_isalnum('{'));
	return (0);
}
*/
