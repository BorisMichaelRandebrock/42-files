/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 15:59:59 by brandebr          #+#    #+#             */
/*   Updated: 2023/08/31 16:55:05 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	sighandler(int sig, siginfo_t *info, void *context)
{
	static int				bit = 0;
	static unsigned char	c = '\0';

	(void)context;
	usleep(100);
	c = c << 1;
	if (sig == SIG_0)
		kill(info->si_pid, SIG_0);
	else
	{
		c = c | 1;
		kill(info->si_pid, SIG_0);
	}
	bit++;
	if (bit == 8)
	{
		write(1, &c, 1);
		bit = 0;
		c = '\0';
	}
}

int	main(int argc, char **argv)
{
	struct sigaction	message1;
	struct sigaction	message2;

	(void)argv;
	if (argc != 1)
	{
		ft_printf("Wrong amount of arguments");
		return (0);
	}
	ft_printf("Server PID: %d\n", getpid());
	message1.sa_flags = SA_SIGINFO;
	message1.sa_sigaction = sighandler;
	sigaction(SIG_0, &message1, NULL);
	message2.sa_flags = SA_SIGINFO;
	message2.sa_sigaction = sighandler;
	sigaction(SIG_1, &message2, NULL);
	while (1)
	{
		pause();
	}
	return (0);
}
