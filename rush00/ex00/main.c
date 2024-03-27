/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereinald <ereinald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 16:27:41 by ereinald          #+#    #+#             */
/*   Updated: 2024/03/27 17:36:50 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>


void	rush00(char x, char y);
void	ft_putchar(char c);
void	rush01(char x, char y);
void	rush03(char x, char y);
void	rush02(char x, char y);
void	rush04(char x, char y);

int	main(int argc, char **argv)
{
	int	ar;
	int	gv;

	if (argc != 3)
		return (printf("wrong amount of arguments"));
	ar = atoi(argv[1]);
	gv = atoi(argv[2]);
	if (ar < 0 || gv < 0)
		return (printf("numbers can not be negative...."));
	rush00(ar, gv);
	ft_putchar('\n');
	rush01(ar, gv);
	ft_putchar('\n');
	rush02(ar, gv);
	ft_putchar('\n');
	rush03(ar, gv);
	ft_putchar('\n');
	rush04(ar, gv);
	return (0);
}
