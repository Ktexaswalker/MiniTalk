/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartine <hmartine@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 16:06:40 by hmartine          #+#    #+#             */
/*   Updated: 2022/07/16 23:08:27 by hmartine         ###   ########.fr       */
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
