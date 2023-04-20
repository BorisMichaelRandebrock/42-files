/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:15:24 by brandebr          #+#    #+#             */
/*   Updated: 2023/04/20 17:29:35 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
/*
#include <unistd.h>
int	main(void)
{
	char	str[] = "Hello 42";

	putstr(str);
}*/	
