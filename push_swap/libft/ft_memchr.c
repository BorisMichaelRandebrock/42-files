/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:46:33 by brandebr          #+#    #+#             */
/*   Updated: 2023/06/12 15:47:15 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*p;

	i = 0;
	p = s;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
			return ((void *)(p + i));
		i++;
	}
	return (NULL);
}
/*
   int	main(void)
   {
   char    str[] = "supercalifragilisticoespialidoso";

   printf("%s", (char *)ft_memchr(str, 'f', 25));
   write(1, "\n", 1);
   printf("\n");
   puts(ft_memchr(str, 'f', 25));
   return (0);
}*/
// line 25 could also be ((void *)&p[i]);
