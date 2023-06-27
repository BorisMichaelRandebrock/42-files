/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 11:35:18 by brandebr          #+#    #+#             */
/*   Updated: 2023/04/06 19:38:34 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a_main;
	int	b_main;
	int	div_main;
	int	mod_main;

	a_main = 4;
	b_main = 2;
	ft_div_mod(a_main, b_main, &div_main, &mod_main);
	printf("%d %d", div_main, mod_main);
}*/
