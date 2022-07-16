/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartine <hmartine@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 20:52:09 by hmartine          #+#    #+#             */
/*   Updated: 2022/07/16 23:12:28 by hmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include<string.h>
#include<stdio.h>
#include<unistd.h>

size_t	ft_strlen(const char* s);
*/

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	num;

	num = 0;
	while (s[num] != '\0')
	{
		num++;
	}
	return (num);
}
