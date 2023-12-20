/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 13:32:00 by brandebr          #+#    #+#             */
/*   Updated: 2023/12/20 13:58:09 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
		size_t	i;
		size_t	c;

		i = 0;
		c = 0;
		while (s[i])
		{
				size_t	j = 0;
				while (accept[j])
				{
						if (s[i] == accept[j])
						{
								c++;
								break ;
						}
						j++;
				}
				i++;
		}
		return (c);
}

int		main(void)
{
		char	*s = "some";
		char	*c = "eabocmhkldnis";
		printf("%zu\n\a", strspn(s, c));
		printf("%zu\n", ft_strspn(s, c));
		return (0);
}

