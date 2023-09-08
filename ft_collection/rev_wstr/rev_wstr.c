/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:07:50 by brandebr          #+#    #+#             */
/*   Updated: 2023/09/06 19:19:36 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strln(char *str)
{
	int	i;
	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	prntwrd(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	*printlstwrd(char *str)
{
	int	i;
	int	j;
	char	*nwstrng;

	i = ft_strln(str);
	j = 0;
	i--;
	while (str[i] && str[i] != ' ')
		i--;
	prntwrd(str + i + 1);
	if (i > 0)
		write(1, " ", 1);
	nwstrng = malloc(sizeof(char) * i + 1);
	if (!nwstrng)
		return (NULL);
	while (j < i)
	{
		nwstrng[j] = str[j];
		j++;
	}
	nwstrng[j] = '\0';
	return (nwstrng);
}

int	main(int argc, char **argv)
{
	char	*str = argv[1];
	int	i;

	if (argc != 2)
		write(1, "\n", 1);
	i = 0;
	while (ft_strln(str) > 0)
		str = printlstwrd(str);
	if (argc == 2)
		write(1, "\n", 1);
	return (0);
}
