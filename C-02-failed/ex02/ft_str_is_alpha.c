/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 12:33:59 by brandebr          #+#    #+#             */
/*   Updated: 2023/04/10 15:52:50 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (*str == '\0')
		return (1);
	while (str[i])
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
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
	char	string2[] = "1";

	ft_str_is_alpha(string);
	ft_str_is_alpha(string2);
}*/
