/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 17:24:22 by brandebr          #+#    #+#             */
/*   Updated: 2023/06/12 11:00:23 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*p_dst;
	unsigned char	*p_src;

	i = 0;
	p_dst = (unsigned char *)dst;
	p_src = (unsigned char *)src;
	if (p_dst == 0 && p_src == 0)
		return (NULL);
	while (i < n)
	{
		p_dst[i] = p_src[i];
		i++;
	}
	return (dst);
}
/*
int	main(void)
{
	char	str[] = "supercalifragilisticoespialidoso";
	char	dst[6];

	printf("before  memcpy src: %s", str);
	printf("\n before memcpy dst: %s", dst);
	ft_memcpy(dst, str, 5);
	printf("\nafter memcpy: %s", dst);
	return (0);
}*/
