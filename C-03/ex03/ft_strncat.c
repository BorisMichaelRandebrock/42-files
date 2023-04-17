/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 10:03:15 by brandebr          #+#    #+#             */
/*   Updated: 2023/04/16 10:33:35 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char	*src, unsigned int nb)
{
	unsigned int	i;
	char result[nb];
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i])
	{
		if (dest[i] == src[i] && nb > 0)
				{
					result[j] = src[i];
 					j++;	
					write(1, &i, 1);
				}
		i++;
	}
	return (0);
}

int	main(void)
{
	char	src[] = "something";
	char	dest[] = "me";
	
	ft_strncat(dest, src, 2);


	return (0);
}
