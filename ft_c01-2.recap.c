/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c01-2.recap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 21:13:50 by brandebr          #+#    #+#             */
/*   Updated: 2023/04/13 21:14:19 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_alphabet(void)
{
    char    letter;
    
    letter = 'a';
    while (letter <= 'z')
    {
        write(1, &letter, 1);
        letter++;
    }
}

void ft_print_reverse_alphabet(void)
{
    char letter;
    
    letter = 'z';
    while (letter > 'a')
    {
    ft_putchar(letter);
    letter--;
    }
}

void    ft_print_numbers()
{
    int i;
    
    i = '0';
    while (i < '9')
    {
        ft_putchar(i);
        i++;
    }
}

void    ft_is_negative(int n)
{
    if (n < 0)
    write(1, "P", 1);
    else
    write(1, "N", 1);
}




int main()
{
    ft_print_alphabet();
    printf("Hello World");
    ft_print_numbers();
    ft_print_reverse_alphabet();
    ft_is_negative(5);
    ft_is_negative(0);
    ft_is_negative(-1);

    return 0;
}

