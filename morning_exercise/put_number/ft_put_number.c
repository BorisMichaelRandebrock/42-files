/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_number.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:40:55 by brandebr          #+#    #+#             */
/*   Updated: 2023/11/23 16:34:25 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putnbr(int n)
{
	//	char	numbers[10] = "0123456789";
		char	*numbers;// = "0123456789";

		numbers = "0123456789";
		if (n < 0)
		{
				write(1, "-", 1);
				n *= -1;
		}
		if (n > 9)
				ft_putnbr(n / 10);
		write(1, &numbers[n % 10], 1);
}

int	main(int argc, char **argv)
{
		int		bo;
		bo = atoi(argv[1]);
		if (argc == 2)
				ft_putnbr(bo);
		write(1, "\n",1);
		return (0);
}
