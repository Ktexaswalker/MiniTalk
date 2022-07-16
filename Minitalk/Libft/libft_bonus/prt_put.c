/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prt_put.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartine <hmartine@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 20:56:48 by hmartine          #+#    #+#             */
/*   Updated: 2022/04/02 15:21:10 by hmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "ft_printf.h"

int	prt_putchar(char c)
{
	int		t_len;

	t_len = 1;
	write(1, &c, 1);
	return (t_len);
}

int	prt_putstr(const char *c)
{
	int	t_len;

	t_len = 0;
	if (!c)
	{
		t_len = write(1, "(null)", 6);
		return (t_len);
	}
	while (c[t_len])
		t_len += prt_putchar(c[t_len]);
	return (t_len);
}
