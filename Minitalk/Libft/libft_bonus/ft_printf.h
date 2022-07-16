/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartine <hmartine@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 15:14:13 by hmartine          #+#    #+#             */
/*   Updated: 2022/04/02 15:21:05 by hmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "./Libft/libft.h"
# include<string.h>
# include<stdio.h>
# include<unistd.h>
# include<stdlib.h>
# include<stdarg.h>

typedef struct s_printf
{
	void			*content;
	struct s_printf	*next;
	char			c;
	char			s;
	char			p;
	unsigned int	d;
	unsigned int	i;
	unsigned int	u;
	unsigned int	x;
	unsigned int	x_;
}	t_printf;

int		ft_printf(const char *s, ...);
int		ft_placeholder(char c, va_list args);
int		prt_putchar(char c);
int		prt_putstr(const char *c);
int		prt_ptr(unsigned long long nbr, char *base);
int		prt_nbr_base(unsigned long long nbr, const char *base);
int		prt_nbr_neg(int nbr, char *base);
int		prt_nbr_dec(unsigned long nbr, const char *base);

#endif
