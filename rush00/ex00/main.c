/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereinald <ereinald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 16:27:41 by ereinald          #+#    #+#             */
/*   Updated: 2023/04/02 18:37:07 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush00(int x, char y);
void	ft_putchar(char c);
void	rush01(char x, char y);
void	rush03(char x, char y);
void	rush02(char x, char y);
void	rush04(char x, char y);

int	main(void)
{
	rush00(3, 5);
	ft_putchar('\n');
	rush01(4, 5);
	ft_putchar('\n');
	rush02(5, 6);
	ft_putchar('\n');
	rush03(9, 6);
	ft_putchar('\n');
	rush04(5, 7);
}
