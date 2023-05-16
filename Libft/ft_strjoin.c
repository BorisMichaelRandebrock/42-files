/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 10:27:06 by brandebr          #+#    #+#             */
/*   Updated: 2023/05/16 11:25:37 by brandebr         ###   ########.fr       */
=======
/*   By: boris <boris@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 12:13:07 by boris             #+#    #+#             */
/*   Updated: 2023/05/15 12:15:16 by boris            ###   ########.fr       */
>>>>>>> f61fb131015d5bd7a66853d9ac17814d767f7a4a
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
<<<<<<< HEAD
	int		i;
	int		j;
	char	*willy;

	i = 0;
	j = 0;
	willy = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!willy)
		return (NULL);
	while (s1[i])
	{
		willy[i] = s1[i];
=======
	int	i;
	int	j;
	char	*str;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
>>>>>>> f61fb131015d5bd7a66853d9ac17814d767f7a4a
		i++;
	}
	while (s2[j])
	{
<<<<<<< HEAD
		willy[i] = s2[j];
			i++;
			j++;
	}
	willy[i] = '\0';
	return (willy);
=======
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
>>>>>>> f61fb131015d5bd7a66853d9ac17814d767f7a4a
}
