/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:26:26 by brandebr          #+#    #+#             */
/*   Updated: 2023/11/27 18:29:01 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}
/*
int	main(void)
{
	int	length;
	char string[] = "supercalifragilistispialidoso"; 	

	length = ft_strlen(string);
	printf("The string has the following amont of characters: %d ", length);
	return (0);
}*/
