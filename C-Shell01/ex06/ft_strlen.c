/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 17:41:25 by brandebr          #+#    #+#             */
/*   Updated: 2023/04/05 18:32:54 by brandebr         ###   ########.fr       */
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
