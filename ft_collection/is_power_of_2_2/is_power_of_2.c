/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 11:38:55 by brandebr          #+#    #+#             */
/*   Updated: 2023/09/08 12:09:27 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	    is_power_of_2(unsigned int n)
{
	unsigned long	i;
	unsigned long	m;

	i = 1;
	m = (unsigned long)n;
	if (m == 0)
		return (0);
	else if	(m == 1)
		return (1);
	while (m > i)
		i *= 2;
	if (m == i)
		return (1);
	return (0);
//lse (n & (n -1) == 0
}
/*
 int	is_power_of_2(unsigned int n)
{
	if (n == 0) 
	{
	    	return 0;
	}
	return (n & (n - 1)) == 0;
}
*/
