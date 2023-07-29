/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:56:40 by brandebr          #+#    #+#             */
/*   Updated: 2023/06/12 13:39:16 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize <= 0)
		return (ft_strlen(src));
	while (src[i] && i < dstsize -1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	i++;
	return (ft_strlen(src));
}
/*
int	main(void)
{
 	char    str[] = "supercalifragilisticoespialidoso";
	char    dst[] = " here i am already waiting for some results";
	int	result;

	
	printf("\n %s \n %s", dst, str);
	result = ft_strlcpy(dst, str, 45);
	printf("\n%d", result);
	printf("\n %s \n %s", dst, str);
	return (0);
}*/
