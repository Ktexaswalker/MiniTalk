/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartine <hmartine@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 16:06:40 by hmartine          #+#    #+#             */
/*   Updated: 2022/02/06 20:22:00 by hmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(int c);
*/

#include"libft.h"

int	ft_isalpha(int c)
{
	if (((c >= 65) && (c <= 90)) || ((c >= 97) && (c <= 122)))
	{
		return (1);
	}
	return (0);
}

/*
int	main(void)
{
	printf("Funcion original: %d, %d, %d, %d, %d \n",isalpha('a'), isalpha('A')\
			, isalpha('z'), isalpha('Z'), isalpha('^'));
	printf("Funcion creada:   %d, %d, %d, %d, %d \n",ft_isalpha('a')\
			, ft_isalpha('A'), ft_isalpha('z'), ft_isalpha('Z')\
		, ft_isalpha('^'));
	return (0);
}
*/
