/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:27:54 by brandebr          #+#    #+#             */
/*   Updated: 2023/06/09 14:22:04 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/**
int	main(void)
{
	int	asci;

	asci = ft_isascii('7');
	printf("if the char is ascii you will see 1, else 0: %d", asci);
	return (0);
}*/
