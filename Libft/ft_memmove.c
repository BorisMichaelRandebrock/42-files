/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 12:03:56 by brandebr          #+#    #+#             */
/*   Updated: 2023/05/09 16:15:49 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
//	size_t				i;
	unsigned char		*p_dst;
	const unsigned char	*p_src;

//	i = 0;
	p_dst = (unsigned char *)dst;
	p_src = (const unsigned char *)src;
	if (!len || src == dst)
		return (dst);
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	while (len--)
		p_dst[len] = p_src[len];
	return (dst);
}
