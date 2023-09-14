/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:19:19 by brandebr          #+#    #+#             */
/*   Updated: 2023/09/11 14:08:27 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char    *ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i])
		{
			s1[i] = s2[i];
			i++;
		}
	s1[i] = '\0';
	return (s1);
}

int	main(void)
{
	int	i;
	char	*src = "somebody that I used to know";
	char	*dest ;
	
	dest = "";
	i = 0;
	printf("%s Initial:", dest); 
	printf("%s", strcpy(dest, src));
//	printf("\n %s", dest); 
	return (0);
}
