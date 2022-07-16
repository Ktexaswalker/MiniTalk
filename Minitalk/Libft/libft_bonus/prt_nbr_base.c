/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prt_nbr_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartine <hmartine@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 20:41:59 by hmartine          #+#    #+#             */
/*   Updated: 2022/04/02 15:21:08 by hmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	prt_nbr_base(unsigned long long nbr, const char *base)
{
	int				t_len;
	unsigned long	div[22];
	unsigned long	mod[22];
	int				i;

	i = 0;
	t_len = 0;
	if (!nbr)
		return (prt_putchar('0'));
	div[i] = nbr;
	while (div[i] >= (int)ft_strlen(base) && base != (void *)0)
	{
		div[i + 1] = div[i] / (int)ft_strlen(base);
		i++;
	}
	while (i >= 0)
	{
		mod[i] = div[i] % (int)ft_strlen(base);
		t_len += prt_putchar(base[mod[i]]);
		i--;
	}
	return (t_len);
}

int	prt_nbr_neg(int nbr, char *base)
{
	int	t_len;

	t_len = 0;
	if (nbr == -2147483648)
		return (prt_putstr("-2147483648"));
	else
	{
		if (nbr < 0)
		{
			t_len += prt_putchar('-');
			nbr *= -1;
		}
		t_len += prt_nbr_dec(nbr, "0123456789");
	}
	return (t_len);
}

int	prt_nbr_dec(unsigned long nbr, const char *base)
{
	int				t_len;
	unsigned long	div[22];
	unsigned long	mod[22];
	int				i;

	i = 0;
	t_len = 0;
	div[i] = nbr;
	while (div[i] >= (int)ft_strlen(base))
	{
		div[i + 1] = div[i] / (int)ft_strlen(base);
		i++;
	}
	while (i >= 0)
	{
		mod[i] = div[i] % (int)ft_strlen(base);
		t_len += prt_putchar(base[mod[i]]);
		i--;
	}
	return (t_len);
}
