/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartine <hmartine@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 19:55:45 by hmartine          #+#    #+#             */
/*   Updated: 2022/07/16 23:19:47 by hmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	ns;
	char	*str;

	if (!s)
		return (NULL);
	ns = ft_strlen(s);
	if ((start >= ns) || (len == 0))
		return (ft_calloc(1, sizeof(char)));
	if (len > ns)
		len = ns;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ns = ft_strlcpy(str, s + start, len + 1);
	return (str);
}
