/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartine <hmartine@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 18:43:51 by hmartine          #+#    #+#             */
/*   Updated: 2022/02/26 14:50:53 by hmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c);
int		ft_wrdcnt(char const *str, char c);
char	**ft_putwrd(char const *s, char c, char **split);
char	*ft_splitwrd(const char *str, int start, int end);

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (!s)
		return (NULL);
	split = malloc(sizeof(char *) * (ft_wrdcnt(s, c) + 1));
	if (!split)
		return (NULL);
	return (ft_putwrd(s, c, split));
}

int	ft_wrdcnt(char const *str, char c)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (*str)
	{
		if (*str != c && x == 0)
		{
			x = 1;
			i++;
		}
		else if (*str == c)
			x = 0;
		str++;
	}
	return (i);
}

char	**ft_putwrd(char const *s, char c, char **split)
{
	size_t	i;
	size_t	j;
	int		index;

	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = ft_splitwrd(s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}

char	*ft_splitwrd(const char *str, int start, int end)
{
	char	*w;
	size_t	i;

	i = 0;
	w = malloc(sizeof(char) * (end - start + 1));
	if (!w)
		return (NULL);
	while (start < end)
		w[i++] = str[start++];
	w[i] = '\0';
	return (w);
}
