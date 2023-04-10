/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brussell <brussell@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 16:29:55 by brussell          #+#    #+#             */
/*   Updated: 2023/04/09 20:51:27 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_error_control(int argc, char **argv);
int	argv_num(char *argv);

char	ft_space_killer(char *argv)
{
	int		i;
	char	spaceless[17];

	i = 0;
	while (i < 31)
	{
		if (argv[i] != ' ')
		{
			spaceless[i / 2] = argv[i];
		}
		i++;
	}
	spaceless[16] = '\0';
	write(1, spaceless, 16);
	write(1, "\n", 1);
	return (*spaceless);
}

void	ft_outerlimits(char *argv)
{
	ft_space_killer(&argv[0]);
//	int inputs[4][4];
/*	
	int *toprow;
	int	*botrow
	int *leftcol
	int	*rightcol

	toprow = x[0];
	botrow = x[1];
	leftcol = x[2];
	rightcol = x[3];*/
}

void	ft_matrix(void)
{
	char	arr[4][4];
	int		i;
	int		j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			arr[i][j] = '0';
			printf("%c ", arr[i][j]);
			j++;
		}
		printf("%c", '\n');
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_outerlimits(argv[1]);
		ft_matrix();
	}	
	return (0);
}
