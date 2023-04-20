/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:57:11 by brandebr          #+#    #+#             */
/*   Updated: 2023/04/20 12:44:12 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (str[i] == to_find[j] && to_find[j] != '\0')
			{
				j++;
				i++;
			}
			if (to_find[j] == '\0')
				return (&str[i - j]);
		}
		i++;
	}
	return (0);
}
/*
#include <unistd.h>
#include <stdio.h>

            printf("%c ", to_find[j]);
int    main(void)
{
    char    str[] = "somthimeng";
    char    to_find[] = "me";

    ft_strstr(str, to_find);
    return (0);
}*/
