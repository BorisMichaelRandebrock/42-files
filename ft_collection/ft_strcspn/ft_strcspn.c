/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:55:48 by brandebr          #+#    #+#             */
/*   Updated: 2023/09/07 13:24:50 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i] && s[i] != reject[j])
	{
		i++;
		while (s[i] == reject[j])
		{
			j++;
			i++;
			return (i - j);
		}
		continue ;
	}
	return (i);
}
/*
int	main(void)
{
	char	str[] = "Hello world";
	char	rej[] = "d";
	printf("%zu", ft_strcspn(str, rej));
	printf("%zu", strcspn(str, rej));
	return (0);
}
*/
