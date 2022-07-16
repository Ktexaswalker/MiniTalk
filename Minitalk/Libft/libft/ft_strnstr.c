/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartine <hmartine@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:00:49 by hmartine          #+#    #+#             */
/*   Updated: 2022/07/16 23:18:18 by hmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include<string.h>
#include<stdio.h>
#include<unistd.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if ((*needle == '\0') || (needle == haystack))
		return ((char *)haystack);
	while ((i < len) && (haystack[i] != '\0'))
	{
		j = 0;
		if (needle[j] != '\0')
		{
			while ((i + j < len) && (needle[j] == haystack[i + j]))
			{
				j++;
				if (needle[j] == '\0')
					return ((char *)haystack + i);
			}
		}
		i++;
	}
	return (NULL);
}
