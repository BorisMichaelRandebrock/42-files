/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 18:42:55 by brandebr          #+#    #+#             */
/*   Updated: 2023/04/10 18:58:18 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (*str == '\0')
		return (1);
	while (str[i])
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			write(1, "A", 1);
					i++;
			continue ;
		}
		write(1, "n", 1);
		return (0);
	}
	return (1);
}

int	main(void)
{
//#include <unistd.h>
//			write(1, "A", 1);
//		write(1, "n", 1);
	char	string[] = "trees";
	char	string2[] = "TREFGH";
	ft_str_is_uppercase(string);
}

