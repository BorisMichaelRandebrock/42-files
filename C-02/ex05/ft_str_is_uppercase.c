/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 18:42:55 by brandebr          #+#    #+#             */
/*   Updated: 2023/04/12 13:41:40 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (*str == '\0')
		return (1);
	while (str[i])
	{
		if (str[i] >= 'A' && *(str + i) <= 'Z')
		{
					i++;
			continue ;
		}
		return (0);
	}
	return (1);
}
/*
#include <unistd.h>
int	main(void)
{
			write(1, "A", 1);
		write(1, "n", 1);
	char	string[] = "1";
	char	string2[] = "TREFGH";

	ft_str_is_uppercase(string);
	ft_str_is_uppercase(string2);
}*/
