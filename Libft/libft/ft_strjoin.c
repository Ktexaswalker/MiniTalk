/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartine <hmartine@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 20:16:10 by hmartine          #+#    #+#             */
/*   Updated: 2022/02/19 21:15:52 by hmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	if ((!s1) || (!s2))
		return (NULL);
	str = (char *)malloc(((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char)) + 1);
	if (!str)
		return (NULL);
	(void)ft_memcpy(str, s1, ft_strlen(s1));
	(void)ft_memcpy(str + ft_strlen(s1), s2, (ft_strlen(s2) + 1));
	return (str);
}
