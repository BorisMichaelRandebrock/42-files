/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 16:01:16 by brandebr          #+#    #+#             */
/*   Updated: 2023/08/30 14:30:56 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	send(int server_pid, char c)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if ((c & (1 << (7 - bit))) == 0)
		{
			if (kill(server_pid, SIG_0) == -1)
				printf("upps...something is wrong ");
		}
		else
		{
			if (kill(server_pid, SIG_1) == -1)
				printf("upps...something is wrong ");
		}
		bit++;
		usleep (100);
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
	ft_printf("Message received 🖖\n");
	fflush(stdout);
	return (0);
}
