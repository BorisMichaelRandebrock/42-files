/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:27:08 by brandebr          #+#    #+#             */
/*   Updated: 2023/11/22 12:30:32 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char    *ft_strcpy(char *s1, char *s2)
{
		int		i;

		i = 0;
		while (s2[i])
		{
				s1[i] = s2[i];
				i++;
		}
		return (s1);
}