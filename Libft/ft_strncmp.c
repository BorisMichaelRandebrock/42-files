/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 12:37:52 by brandebr          #+#    #+#             */
/*   Updated: 2023/06/12 15:01:59 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	diff;

	i = 0;
	while ((s1[i] || s2[i]) && n > i)
	{
		if (s1[i] != s2[i])
		{
			diff = (unsigned char)s1[i] - (unsigned char)s2[i];
			return (diff);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char    str[] = "supercalifragilisticoespialidoso";
	char    str2[] = "supercalizggasgragilisticoespialidoso";

	printf("%d", ft_strncmp(str, str2, 5));
	printf("\n%d", ft_strncmp(str, str2, 35));
	return (0);
}*/
