/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:29:48 by brandebr          #+#    #+#             */
/*   Updated: 2023/09/07 15:51:54 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int start, int end)
{
/*	int	*willy;
	int	i;
	int	j;

	i = start;
	j = 0;
	while (start <= end)
		start++;
	willy = malloc(sizeof(int) * start);
	if (!willy)
		return NULL;
	if (start == end)
	{
		willy[0] = start;
		return (willy);
	}
		while (i < end)
		{
			willy[j++] = i;
			i++;
		}
		willy[i] = '\0';
		return (willy);
	}
*/
	int	i;
	int	len = abs(end - start) + 1;

	i = 0;
	int *res = (int *)malloc(sizeof(int) * len);
	while (i < len)
	{
		if (start < end)
		{
			res[i] = start;
			start++;
			i++;
		}
		else
		{
			res[i] = start;
			start--;
			i++;
		}
	}
        return (res);
}
/*
int	main(void)
{
	int	*arr;
	int	i = 0;

	arr = ft_range(0, 3);
	while (i < 20)
	{
		printf("%i", arr[i]);
		i++;
	}
}
*/
