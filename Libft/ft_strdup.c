/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:46:38 by brandebr          #+#    #+#             */
/*   Updated: 2023/06/13 10:42:47 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*willy;

	len = ft_strlen(s1) + 1;
	willy = (char *) malloc(len * sizeof(char));
	if (!willy)
		return (NULL);
	ft_strlcpy(willy, s1, len);
	return (willy);
}
/*
int	main(void)
{
	char	str[] = "supercalifragilisticoespialidoso";
	char	*result;
	
	result = ft_strdup(str);
	printf("%s \n", ft_strdup(str));
	puts(result);
	return (0);
}*/
