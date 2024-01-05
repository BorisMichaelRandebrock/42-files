/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 12:21:08 by brandebr          #+#    #+#             */
/*   Updated: 2024/01/05 16:50:48 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		nc(int nbr);
char	*ft_itoa(int nbr);

int	main(int argc, char **argv)
{

		if (argc == 2)
		{
				int	num;
				int	n;
				char	*number;

				num = atoi(argv[1]);
				n = nc(num);
				number = ft_itoa(num);
				printf("the numbers are: %i\n", n);
				printf("the string number is: %s\n", number);
		}
		return (0);
}
