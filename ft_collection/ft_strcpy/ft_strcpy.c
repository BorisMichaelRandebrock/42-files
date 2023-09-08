/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 11:00:37 by brandebr          #+#    #+#             */
/*   Updated: 2023/09/08 11:38:29 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	print(char c)
{
	write(1, &c, 1);
}

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i])
		{
			s1[i] =  s2[i];
			i++;
		}
	s1[i] = '\0';
	return (s1);
}
/*
#include <stdio.h>

int	main(void)
{
	char *src = strdup("Hola q tal");
	char *dest = malloc(1000);

	dest = ft_strcpy(src, dest);
}*/
