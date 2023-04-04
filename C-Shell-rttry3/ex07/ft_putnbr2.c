/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 18:01:34 by brandebr          #+#    #+#             */
/*   Updated: 2023/04/04 13:29:40 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr_recursive(unsigned int number)
{
    if (number / 10 )
        ft_putnbr_recursive(number / 10);
    
    ft_putchar((number % 10) + '0');
}

void    ft_putnbr(int nb)
{
    unsigned int number;

    number = nb;
    if (nb < 0)
    {
        ft_putchar('-');
    }
    ft_putnbr_recursive(number);
}

int main(void)
{
    ft_putnbr(-2147483648);
}
