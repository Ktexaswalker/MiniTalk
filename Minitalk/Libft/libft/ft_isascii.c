/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartine <hmartine@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 19:39:02 by hmartine          #+#    #+#             */
/*   Updated: 2022/07/16 23:11:29 by hmartine         ###   ########.fr       */
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
