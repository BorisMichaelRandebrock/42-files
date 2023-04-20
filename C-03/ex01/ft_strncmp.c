/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 12:06:27 by brandebr          #+#    #+#             */
/*   Updated: 2023/04/14 10:16:27 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				diff;

	i = 0;
	while ((s1[i] || s2[i]) && n > i)
	{
		if (s1[i] != *(s2 + i))
		{
			diff = s1[i] - *(s2 + i);
			return (diff);
		}
		i++;
		continue ;
	}
	return (0);
}
/*
int	main(void)
{
	char	s1[] = "qwerty";
	char	s2[] = "qwert";

	ft_strncmp(s1, s2, 3);
	return (0);
}*/
