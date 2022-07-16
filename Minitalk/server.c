/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartine <hmartine@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 18:27:00 by hmartine          #+#    #+#             */
/*   Updated: 2022/07/16 23:04:48 by hmartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	reciver(int sig, siginfo_t *info, void *context)
{
	static int				i = 0;
	static unsigned char	c = 0;

	(void)context;
	(void)info;
	if (sig == SIGUSR2)
		c |= 1;
	if (++i == 8)
	{
		i = 0;
		if (!c)
			kill(info->si_pid, SIGUSR2);
		ft_putchar_fd(c, 1);
		c = 0;
	}
	else
		c <<= 1;
}

int	main(void)
{
	struct sigaction	sa1;
	struct sigaction	sa2;
	pid_t				my_pid;

	my_pid = getpid();
	ft_putstr_fd("Server PID: ", 1);
	ft_putnbr_fd(my_pid, 1);
	ft_putchar_fd('\n', 1);
	sa1.sa_sigaction = reciver;
	sa1.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &sa1, NULL);
	sa2.sa_sigaction = reciver;
	sa2.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR2, &sa2, NULL);
	while (1)
		sleep(1);
	return (0);
}
