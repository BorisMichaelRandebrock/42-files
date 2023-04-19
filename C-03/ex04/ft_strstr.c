/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:57:11 by brandebr          #+#    #+#             */
/*   Updated: 2023/04/18 12:15:58 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] != to_find[j])
			i++;
		else
		{
			while (str[i] == to_find[j])
			{
				j++;
				i++;
			}
			return (&str[i - j]);
		}
	}
	return (NULL);
}
/*
int	main(void)
{
	char	str[] = "something";
	char	to_find[] = "me";

	ft_strstr(str, to_find);
	return (0);
}*/
