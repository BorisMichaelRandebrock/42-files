/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:44:17 by brandebr          #+#    #+#             */
/*   Updated: 2023/04/20 16:06:33 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
			i++;
	}
	return (i);
}
/*
int	main(void)
{
	int	algo;

	algo = ft_strlen("supercalifragilisticoespiralidoso");
	printf("%d", algo);
}*/
