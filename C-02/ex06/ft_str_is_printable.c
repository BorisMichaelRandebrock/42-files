/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 19:56:16 by brandebr          #+#    #+#             */
/*   Updated: 2023/04/12 13:42:27 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (*str == '\0')
		return (1);
	while (str[i])
	{
		if (str[i] >= 32 && *(str + i) <= 126)
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
	char	string[] = "*<. B";
	char	string2[] = "\n 142 Ä";

	ft_str_is_printable(string);
	ft_str_is_printable(string2);
}*/
