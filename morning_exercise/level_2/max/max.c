/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 17:49:36 by brandebr          #+#    #+#             */
/*   Updated: 2023/12/20 18:17:33 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int* tab, unsigned int len)
{
		unsigned int	i;
		int		max;

		i = 0;
		max = tab[0];
		while (i < len)
		{
				if (max < tab[i])
						max = tab[i];
				i++;
		}
		return (max);
}
