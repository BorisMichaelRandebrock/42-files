/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 16:01:16 by brandebr          #+#    #+#             */
/*   Updated: 2023/08/31 13:04:22 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	sighandler(int sig)
{
	if (sig == SIG_0)
	{
		usleep(50);
		ft_printf("bit 🎉 ");
	}
	else
	{
		ft_printf("message 👍");
		exit (1);
	}
}

static void	send(int server_pid, char c)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if ((c & (1 << (7 - bit))) == 0)
		{
			if (kill(server_pid, SIG_0) == -1)
				printf("upps...something is wrong ");
			signal(SIG_0, &sighandler);
			pause();
		}
		else
		{
			if (kill(server_pid, SIG_1) == -1)
				printf("upps...something is wrong ");
			signal(SIG_1, &sighandler);
			pause();
		}
		bit++;
		usleep (200);
	}
}

int	main(int argc, char **argv)
{
	pid_t	pid;
	int		i;
	char	*str;

	if (argc != 3)
	{
		ft_printf("please enter: %s <server PID> <string to send>\n", argv[0]);
		return (1);
	}
	pid = ft_atoi(argv[1]);
	str = argv[2];
	i = 0;
	while (str[i])
	{
		send(pid, str[i]);
		i++;
	}
	return (0);
}
