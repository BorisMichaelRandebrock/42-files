/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 16:15:58 by brandebr          #+#    #+#             */
/*   Updated: 2023/04/10 17:31:11 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (*str == '\0')
		return (1);
	while (str[i])
	{
		if (*str >= '0' && *str <= '9')
		{
			i++;
			continue ;
		}
		return (0);
	}
	return (1);
}
/*
int	main(void)
#include <unistd.h>
			write(1, "n", 1);
		write(1, "*", 1);
{
	char	string[] = "0";
	char	numb[] = "4";

	ft_str_is_numeric(string);
	ft_str_is_numeric(numb);
}*/
