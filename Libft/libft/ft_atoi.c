/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartine <hmartine@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 17:43:13 by hmartine          #+#    #+#             */
/*   Updated: 2022/02/06 19:09:09 by hmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

int	ft_atoi(const char* str);
*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	int						c;
	unsigned long long int	res;
	int						sign;

	c = 0;
	res = 0;
	sign = 1;
	while (str[c] == 32 || (str[c] >= 9 && str[c] <= 13))
		c++;
	if (str[c] == '-' || str[c] == '+')
	{
		if (str[c] == '-')
			sign = -1;
		c++;
	}
	while (str[c] != '\0' && (str[c] >= '0' && str[c] <= '9'))
	{
		res = (res * 10) + (str[c] - '0');
		c++;
	}
	if (res >= 9223372036854775807 && sign == -1)
		return (0);
	else if (res >= 9223372036854775807)
		return (-1);
	return ((int)(res * sign));
}

/*
int	main(void)
{

	char	a[20] = " -17";
	char	b[20] = "40 0";
	char	c[20] = "9223372036854775810";
	char	d[20] = "e12";

	printf("o->%d\n", atoi(a));
	printf("+->%d\n", ft_atoi(a));
	printf("o->%d\n", atoi(b));
	printf("+->%d\n", ft_atoi(b));
	printf("o->%d\n", atoi(c));
	printf("+->%d\n", ft_atoi(c));
	printf("o->%d\n", atoi(d));
	printf("+->%d\n", ft_atoi(d));
	return (0);
}
*/
