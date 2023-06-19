/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 11:58:45 by brandebr          #+#    #+#             */
/*   Updated: 2023/06/12 19:43:45 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*willy;

	willy = (void *)malloc(count * size);
	if (!willy)
		return (0);
	ft_bzero(willy, count * size);
	return (willy);
}
/*
int	main(void)
{
	int	i, *ptr;
	int	sum = 0;

	ptr =ft_calloc(10, sizeof(int));
	if (ptr ==NULL)
	{
		printf("error message..: no mem allocated...!");
		exit(0);
	}
	printf("Bud calculating the sequence sum of the first 10 terms \n ");
	for (i = 0; i < 10; ++i) { * (ptr + i) = i;
		sum += * (ptr + i);
	}
	printf("Sum = %d", sum);
	free(ptr);
	return (0);
}*/
