/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 16:34:41 by brandebr          #+#    #+#             */
/*   Updated: 2023/04/06 21:38:30 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}
int	main(void)
{
	char	str[27] = "My name is Inigo Montoya..";
	ft_putstr(str);
}
