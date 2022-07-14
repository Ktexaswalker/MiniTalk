/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartine <hmartine@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 20:52:09 by hmartine          #+#    #+#             */
/*   Updated: 2022/02/06 19:59:22 by hmartine         ###   ########.fr       */
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

/*
int	main(void)
{
	char	word0[1] = "";
	char	word1[10] = "que tal?";
	char	word2[20] = "Como va todo, bien?";
	char	word3[260] = "Lorem ipsum dolor sit amet, \
	consectetrur adipiscing elit. Phasellus in velit massa. \
	Nam in urna pulvinar, lacinia risus a, bibendum ante. \
	Ut lorem lorem, faucibus vel massa id, faucibus	sollicitudin nisi. \
	Sed nec posuere justo. Nulla ullamcorper tincidunt.";

	printf("Original 0: %lu, Creada 0: %lu\n", strlen(word0), ft_strlen(word0));
	printf("Original 1: %lu, Creada 1: %lu\n", strlen(word1), ft_strlen(word1));
	printf("Original 2: %lu, Creada 2: %lu\n", strlen(word2), ft_strlen(word2));
	printf("Original 3: %lu, Creada 3: %lu\n", strlen(word3), ft_strlen(word3));
	return(0);
}
*/
