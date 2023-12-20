/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 11:01:40 by brandebr          #+#    #+#             */
/*   Updated: 2023/12/20 12:11:51 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
		int	j;

		while (*s1)
		{
				j = 0;
				while  (s2[j])
				{
						if (s2[j] && *s1 == s2[j])
								return ((char *)s1);
						j++;
				}
				s1++;
		}
		return (NULL);
}
int		main(void)
{
		char	*s = "somwher1e over the rainbow ";
		char	*s1 = " yx1 :wz1";

		printf("number of chars spannned: %c\n", *strpbrk(s, s1));
		printf("ft: %c\n", *ft_strpbrk(s, s1));
		return (0);



}
