/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 17:44:06 by brandebr          #+#    #+#             */
/*   Updated: 2023/04/07 20:44:07 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i])
	{
		if ((i < n) || (src[i]))
		{
			dest[i] = src[i];
		}
			i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
	++i;
	}
	return (dest);
}
/*
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	char	str[11] = "Hola Anna";
	char	dest[20];

	ft_strncpy(dest, str, 20);
	ft_putstr(dest);
}*/
