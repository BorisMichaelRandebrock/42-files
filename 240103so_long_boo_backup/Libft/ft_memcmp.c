/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 19:05:27 by brandebr          #+#    #+#             */
/*   Updated: 2023/06/12 17:03:09 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*p_s1;
	const unsigned char	*p_s2;

	i = 0;
	p_s1 = s1;
	p_s2 = s2;
	while (n > i)
	{
		if (p_s1[i] != p_s2[i])
		{
			return ((unsigned char)p_s1[i] - (unsigned char)p_s2[i]);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char    str[] = "supercalifragilisticoespialidoso";
	char    str2[] = "supervcalifragilisticoespialidoso";

	printf("%d", ft_memcmp(str, str, 20));
	printf("\n%d", ft_memcmp(str, str2, 20));
}*/
