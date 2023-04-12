/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 12:33:59 by brandebr          #+#    #+#             */
/*   Updated: 2023/04/12 13:15:09 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <unistd.h>
int	main(void)
{
			write(1, "A", 1);
		write(1, "n", 1);
	char	string[] = "trees";
	char	string2[] = "1";

	ft_str_is_alpha(string);
	ft_str_is_alpha(string2);
}*/
