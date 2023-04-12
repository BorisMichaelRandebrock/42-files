/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 12:54:36 by brandebr          #+#    #+#             */
/*   Updated: 2023/04/12 13:37:11 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && *(str + i) <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char	string[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	string2[] = "\n";

	printf("%s", string);
	ft_strlowcase(string);
	printf("%s", string2);
	printf("%s", string);
}*/
