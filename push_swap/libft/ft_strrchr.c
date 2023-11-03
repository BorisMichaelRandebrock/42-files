/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:49:53 by brandebr          #+#    #+#             */
/*   Updated: 2023/06/12 14:46:48 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	if ((char)c == '\0')
		return (&s[len]);
	if (!len)
		return (0);
	if ((char)c == s[len])
		return (&s[len]);
	len--;
	while (len >= 0)
	{
		if (s[len] == (unsigned char)c)
			return (&s[len]);
		if (len == 0)
			break ;
		len--;
	}
	return (NULL);
}
/*
int	main(void)
{
	char    str[] = "supercalifragilisticoespialidoso";

	printf("%s", ft_strrchr(str, 'p'));
	return (0);
}*/
