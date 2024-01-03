/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 17:36:47 by brandebr          #+#    #+#             */
/*   Updated: 2023/06/26 16:58:23 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;
	int		i;

	va_start(ap, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
			i = ft_printformat(*(++format), ap);
		else
			i = write(1, format, 1);
		if (i < 0)
			return (-1);
		count += i;
		format++;
		va_end(ap);
	}
	return (count);
}
/*
int main(void)
{
	char *s2 = "Mussum Ipsum, cacilds vidis litro abertis. Posuere libero 
	varius. Nullam a nisl ut ante blandit hendrerit. Aenean sit amet nisi. 
	Atirei o pau no gatis, per gatis num morreus.";
	ft_printf("1%s ", "");
	ft_printf("\n2  %s ", "");
	ft_printf("\n3 %s ", "");
	ft_printf("\n 4 %s ", "");
	ft_printf("\n 5  %s ", "-");
	ft_printf("\n 6  %s %s ", "", "-");
	ft_printf("\n7  %s %s ", " - ", "");
	ft_printf("\n8  %s %s %s %s %s", " - ", "", "4", "", s2);
	ft_printf("\n9  %s %s %s %s %s ", " - ", "", "4", "", "2 ");
	ft_printf("\n10  NULL %s NULL ", NULL);
	return (0);
}
*/

/*
int	main(void)
{
	char	*count;
	char	coun;
	int	i;
	int	num;

	num = 12345678;
	count = "boooo";
	i = ft_printf("the string is: %s\n", count);	
	printf("the number is: %i \n", i);
	i = printf("the string is: %s\n", count);	
	printf("the number is: %i", i);
	coun = 'c';
	ft_printf("the char to be printed is: %c\n", coun);
	printf("the char to be printed is:  %c\n",coun);
	ft_printf("the string is: %s\n", count);
	printf("the string is: %s\n", count);
	ft_printf("the char to be printed is: %c\n", coun);
	printf("the char to be printed is:  %c\n",coun);
	printf("the number to be printed is: %i\n",num);
	ft_printf("the number to be printed is: %i\n", num);
	ft_printf("%u", -10);
	printf("\n%u", -10);
	ft_printf("%x", -10);
	printf("\n%x", -10);
	return (0);
}

*/
