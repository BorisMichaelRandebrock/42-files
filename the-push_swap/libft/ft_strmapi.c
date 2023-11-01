/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:03:40 by brandebr          #+#    #+#             */
/*   Updated: 2023/06/13 16:07:59 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*result;

	i = -1;
	result = ft_strdup(s);
	if (result == 0)
		return (NULL);
	while (s[++i])
		result[i] = f(i, s[i]);
	return (result);
}
/*
char	f(unsigned int i, char c)
{
	char str;

	str = i + c - i + 1;
	return (str);
}

int	main()
{
	char	str1[] = "hal";
	char	*str2;

	str2 = ft_strmapi(str1, *f);
	puts(str2);
	printf("%s\n", str2);
}*/
