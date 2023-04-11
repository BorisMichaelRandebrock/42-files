/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 13:17:18 by brandebr          #+#    #+#             */
/*   Updated: 2023/04/11 18:23:15 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alphanum(char str)
{
	if (!(str >= 'a' && str <= 'z') && !(str >= 'A' && str <= 'Z')
		&& !(str >= '0' && str <= '9'))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	while (str[i])
	{
		if ((ft_str_is_alphanum(str[i - 1]) == 0)
			&& (str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - 32;
	i++;
	}
	if (str[0] >= 'a' && str[0] < 'z')
		str[0] = str[0] - 32;
	return (str);
}
/*
#include <stdio.h>
#include <unistd.h>
int	main(void)
{
	char	string[] = "salut, comment tu va? 42mots quarante-deux; cinquante+et+un";

	ft_strcapitalize(string);
	write(1, string, 60);
}*/
