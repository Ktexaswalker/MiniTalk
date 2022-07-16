/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartine <hmartine@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 16:38:39 by hmartine          #+#    #+#             */
/*   Updated: 2022/02/27 17:06:43 by hmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd);

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = ft_strlen(s);
	write(fd, s, i);
	write(fd, "\n", 1);
}
