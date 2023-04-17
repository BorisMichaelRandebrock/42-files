/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarferna <sarferna@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 16:59:11 by sarferna          #+#    #+#             */
/*   Updated: 2023/04/16 19:54:38 by sarferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}

char	*ft_cpy_mkr(char *str, unsigned int i, unsigned int j)
{
	unsigned int	t;
	char			array[200];

	t = 0;
	while (str[i - j] != '\n')
	{
		array[t] = str[i - j];
		t++;
	}
	array[t] = '\0';
	return (array);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	c;

	c = ft_strlen(to_find) - 1;
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] != to_find[j])
		{
			i -= j;
			j = 0;
		}
		else
		{
			if (j == c)
				return (ft_cpy_mkr(str, i, j));
			j++;
		}
		i++;
	}
	if (j == 0)
		return (0);
}

void	clear_write_array(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	rj;
	char			*array;
	char			array_red[200];

	i = 0;
	j = 0;
	rj = 0;
	array[1200] = ft_strstr(str, to_find);
	while (array[i++] != ':')
	i++;
	while (array[i] == ' ')
		i++;
	while (array[i])
	{
		array[i] = array_red[j];
		i++;
		j++;
	}
	while (rj <= j)
	{
		write(1, array_red[rj], 1);
		rj++;
	}
}
