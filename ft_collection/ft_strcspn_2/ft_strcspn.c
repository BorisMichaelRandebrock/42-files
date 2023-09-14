/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:57:42 by brandebr          #+#    #+#             */
/*   Updated: 2023/09/12 16:24:06 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == reject[j])
			return (i);
		else
			i++;
	}
	return (i);
}
/*
int	main(void)
{
	char	*str1 = "hello world";
	char	*str2 = "hello world";
	int	i;

	i = ft_strcspn(str1, str2);
	printf("%i", i);
}*/
