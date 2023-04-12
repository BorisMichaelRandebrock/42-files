/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 16:15:58 by brandebr          #+#    #+#             */
/*   Updated: 2023/04/12 13:44:12 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (*str == '\0')
		return (1);
	while (str[i])
	{
		if (str[i] >= '0' && *(str + i) <= '9')
		{
			i++;
			continue ;
		}
		return (0);
	}
	return (1);
}
/*
#include <unistd.h>
int	main(void)
{
  char    string[] = "878780j776";
      char    numb[] = "4";

      ft_str_is_numeric(string);
      ft_str_is_numeric(numb);

//      int*        x = direccion;
  //    int        *x = valor;
    //  char b
     // &x != x

      x = 00x00000
}*/
