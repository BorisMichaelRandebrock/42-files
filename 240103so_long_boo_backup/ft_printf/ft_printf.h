/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 16:45:07 by brandebr          #+#    #+#             */
/*   Updated: 2023/06/26 17:37:22 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h> 
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
char	*ft_itoa(int n);
char	*ft_itoa_u(unsigned int n);
int		ft_printformat(char specifier, va_list ap);
int		ft_putchar(char s);
int		ft_putstr(char *s);
int		ft_putnumber(unsigned long n);
int		ft_putnumber_u(unsigned int n);
int		ft_puthex(unsigned long long n, int base);
int		ft_puthex_u(unsigned int n, int base);
int		ft_put_p(unsigned long long n, int base);

#endif
