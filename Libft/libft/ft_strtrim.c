/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartine <hmartine@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 16:37:57 by hmartine          #+#    #+#             */
/*   Updated: 2022/02/20 18:39:26 by hmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<unistd.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	if ((!s1) || (!set))
		return (NULL);
	while (*s1 != '\0' && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}
/*
int	main(void)
{
	char	a[30] = "./.. tu ./..como vas ./..";
	char	b[20] = "./..";

	printf("%s\n", ft_strtrim(a, b));
	return (0);
}
*/
