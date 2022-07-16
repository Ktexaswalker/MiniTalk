/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartine <hmartine@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 18:26:45 by hmartine          #+#    #+#             */
/*   Updated: 2022/07/16 23:04:51 by hmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	action(int sig)
{
	static int	received = 0;

	if (sig == SIGUSR1)
		++received;
	else
	{
		ft_putnbr_fd(received, 1);
		ft_putchar_fd('\n', 1);
		exit(0);
	}
}

void	decoder(int pid, char *str)
{
	int		i;
	char	c;

	while (*str)
	{
		i = 8;
		c = *str++;
		while (i--)
		{
			if (c >> i & 1)
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			usleep(100);
		}
	}
	i = 8;
	while (i--)
	{
		kill(pid, SIGUSR1);
		usleep(10);
	}	
}

int	main(int argc, char **argv)
{
	int	cont;

	cont = 0;
	if (argc == 3 && argv[2])
	{
		ft_putstr_fd("Send    : ", 1);
		ft_putnbr_fd(ft_strlen(argv[2]), 1);
		ft_putchar_fd('\n', 1);
		ft_putstr_fd("Received: ", 1);
		ft_putstr_fd(argv[2], 1);
		ft_putchar_fd('\n', 1);
		signal(SIGUSR1, action);
		signal(SIGUSR2, action);
		decoder((ft_atoi(argv[1])), argv[2]);
		pause();
	}
	return (0);
}
