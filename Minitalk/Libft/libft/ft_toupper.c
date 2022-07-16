/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartine <hmartine@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 19:01:40 by hmartine          #+#    #+#             */
/*   Updated: 2022/07/16 23:15:19 by hmartine         ###   ########.fr       */
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
