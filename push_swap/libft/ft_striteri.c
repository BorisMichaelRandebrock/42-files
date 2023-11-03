/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 18:35:04 by brandebr          #+#    #+#             */
/*   Updated: 2023/06/16 17:54:05 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = -1;
	while (s[++i])
		f(i, &s[i]);
}
/*
 void    f(unsigned int i, char* c)
{
	*c  = i + *c - i + 1;
 }

void	uppercased(unsigned int i, char *c)
{
	i *= 1;
	*c = *c -32;
}

int	main(void)
{
	char	str1[] = "hal";
	
	printf("who is  %s", str1);
	ft_striteri(str1, &f);
	printf("?\n");
	puts(str1);
	ft_striteri(str1, &uppercased);
	printf("who is Hal? ");
	puts(str1);
	return (0);
}
*/
//	ft_striteri(str1, *f);
//	funnily the *f does the same as the &f... 😮
