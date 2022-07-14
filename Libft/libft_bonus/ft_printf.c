/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartine <hmartine@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 14:55:17 by hmartine          #+#    #+#             */
/*   Updated: 2022/04/02 15:22:44 by hmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include<stdarg.h>

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		pos;
	int		t_length;

	va_start(args, s);
	pos = 0;
	t_length = 0;
	if (!s)
		return (0);
	while (s[pos])
	{
		if (s[pos] == '%')
		{	
			pos++;
			t_length += ft_placeholder(s[pos], args);
		}
		else
			t_length += prt_putchar(s[pos]);
		pos++;
	}
	va_end(args);
	return (t_length);
}

int	ft_placeholder(char c, va_list args)
{
	int	lng;

	lng = 0;
	if (c == 'c')
		lng += prt_putchar (va_arg(args, int));
	else if (c == 's')
		lng += prt_putstr ((char *)va_arg(args, char *));
	else if (c == 'p')
		lng += prt_ptr (va_arg(args, unsigned long long), "0123456789abcdef");
	else if (c == 'd' || c == 'i')
		lng += prt_nbr_neg (va_arg (args, int), "0123456789");
	else if (c == 'u')
		lng += prt_nbr_dec (va_arg (args, unsigned int), "0123456789");
	else if (c == 'x')
		lng += prt_nbr_base (va_arg (args, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		lng += prt_nbr_base (va_arg (args, unsigned int), "0123456789ABCDEF");
	else if (c == '%')
		lng += prt_putchar(c);
	return (lng);
}

int	prt_ptr(unsigned long long nbr, char *base)
{
	int	t_len;

	t_len = 0;
	if (!nbr)
	{
		t_len += prt_putstr("0x0");
		return (t_len);
	}
	else
	{
		if ((int)ft_strlen(base) >= 16 && base[10] == 'a')
		{
			t_len += prt_putstr("0x");
			t_len += prt_nbr_base(nbr, base);
		}
	}
	return (t_len);
}
