/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 18:50:51 by brandebr          #+#    #+#             */
/*   Updated: 2023/06/12 18:54:43 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*p_haystack;
	char	*p_needle;

	i = 0;
	p_haystack = (char *)haystack;
	p_needle = (char *)needle;
	if (p_needle[0] == '\0')
		return (p_haystack);
	while (p_haystack[i] && i < len)
	{
		j = 0;
		if (p_haystack[i] == p_needle[j])
		{
			while (p_needle[j] && (i + j < len) && p_haystack[i + j]
				== p_needle[j])
				j++;
			if (p_needle[j] == '\0')
				return (&p_haystack[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char    str[] = "supercalifragilisticoespialidoso";
	char    str2[] = "califra";

	printf("%s", ft_strnstr(str, str2, 35));
	printf("\n%s", ft_strnstr(str, str2, 5));
}*/
