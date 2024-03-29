/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 15:59:59 by brandebr          #+#    #+#             */
/*   Updated: 2023/09/01 16:53:47 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	sighandler(int sig)
{
	static int				bit = 0;
	static unsigned char	c = '\0';

	c = c << 1;
	if (sig != SIG_0)
		c = c | 1;
	bit++;
	if (bit == 8)
	{
		write(1, &c, 1);
		bit = 0;
		c = '\0';
	}
}

int	main(void)
{
	signal(SIG_0, &sighandler);
	signal(SIG_1, &sighandler);
	ft_printf("Server PID: %d\n", getpid());
	while (1)
	{
		pause();
	}
	return (0);
}
