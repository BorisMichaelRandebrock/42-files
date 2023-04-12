/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 18:08:12 by brandebr          #+#    #+#             */
/*   Updated: 2023/04/10 18:34:40 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (*str == '\0')
		return (1);
	while (str[i])
	{
		if (*str >= 'a' && *str <= 'z')
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
{
#include <unistd.h>
			write(1, "A", 1);
		write(1, "n", 1);
	char	string[] = "trees";
	char	string2[] = "TREFGH";

	ft_str_is_lowercase(string);
	ft_str_is_lowercase(string2);
}*/
