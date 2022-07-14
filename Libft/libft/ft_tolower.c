/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartine <hmartine@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 19:34:31 by hmartine          #+#    #+#             */
/*   Updated: 2022/02/06 18:43:10 by hmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include<ctype.h>
#include<stdio.h>
#include<unistd.h>

int	ft_tolower(int c);
*/

#include "libft.h"

int	ft_tolower(int c)
{
	if ((c > 64) && (c < 91))
		c += 32;
	return (c);
}

/*
int	main(void)
{
	printf("Original: a->%d, A->%d\n", tolower('a'), tolower('A'));
	printf("Creada:   a->%d, A->%d\n", ft_tolower('a'), ft_tolower('A'));
	return (0);
}
*/
