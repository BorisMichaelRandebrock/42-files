/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 09:45:54 by brandebr          #+#    #+#             */
/*   Updated: 2023/04/13 11:51:53 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (0);
		}
		i++;
		continue ;
	}
	return (1);
}
/*
int	main(void)
{
	char	s1[] = "qwerty";
	char	s2[] = "qwert";

	ft_strcmp(s1, s2);
}*/
