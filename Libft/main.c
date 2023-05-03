/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:52:23 by brandebr          #+#    #+#             */
/*   Updated: 2023/05/03 19:10:09 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int	str;
	int	algo;

	str = 'a';
	algo = ft_strlen("supercalifragilisticoespiralidoso");
	printf("%d", ft_isalpha(str));
	printf(" is alpha \n" );
	printf("%d", ft_isalnum(str));
	printf(" is allnum \n");
	printf("%d", ft_isdigit(str));
	printf(" is isdigit \n");
	printf("%d", ft_isascii(str));
	printf(" is isascii	\n");
	printf("%d", ft_isprint(str));
	printf(" is isprint	\n");
	printf("%c", ft_toupper(str));
	printf(" is toupper	\n");
	printf("%c", ft_tolower(str));
	printf(" is tolower	\n");
	return (0);
}
