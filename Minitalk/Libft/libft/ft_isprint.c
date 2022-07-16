/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartine <hmartine@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 20:26:54 by hmartine          #+#    #+#             */
/*   Updated: 2022/07/16 23:11:56 by hmartine         ###   ########.fr       */
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
