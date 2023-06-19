/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 16:17:08 by brandebr          #+#    #+#             */
/*   Updated: 2023/06/12 13:25:58 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	ttl_len;
	size_t	dst_len;

	i = 0;
	j = 0;
	dst_len = ft_strlen(dst);
	ttl_len = ft_strlen(dst) + ft_strlen(src);
	if (dstsize > dst_len)
	{
		while (dst[i])
			i++;
		while (src[j] && i < dstsize -1)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	if (dstsize < dst_len)
		return (ft_strlen(src) + dstsize);
	return (ttl_len);
}
/*
int	main(void)
{
	char    str[] = "supercalifragilisticoespialidoso";
	char    dst[] = " here i am already waiting for some results";
	int	result;

	printf("\n %s \n %s", dst, str);
	result = ft_strlcat(dst, str, 85);
	printf("\n%d", result);
	printf("\n %s \n %s", dst, str);
	return (0);
}*/
