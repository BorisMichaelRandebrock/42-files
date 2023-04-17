/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvecchia <lvecchia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 12:44:29 by lvecchia          #+#    #+#             */
/*   Updated: 2023/04/16 21:34:14 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int	error_input(void)
{
	write(1, "error", 5);
	write(1, "\n", 1);
	return (1);
}

int	check_error(int argc, char **argv)
{
	int		i;
	int		j;

	j = 1;
	if (argc == 2)
		j = 1;
	else if (argc == 3)
		j = 2;
	else
	{
		error_input();
		return (1);
	}
	i = 0;
	while (argv[j][i])
	{
		if (argv[j][i] >= 48 && argv[j][i] <= 57)
			i++;
		else
		{
			error_input();
			return (1);
		}
	}
	return (0);
}

int	open_dict(int argc, char **argv)
{
	int	file;

	file = 1;
	if (check_error(argc, argv) == 1)
	{
		return (1);
	}
	file = open("number.dict", O_RDONLY);
	if (file == -1)
	{
		write(1, "Cannot open the dictionary.\n", 27);
		return (1);
	}
	if (argc == 3)
	{
	file = open(argv[1], O_RDONLY);
		if (file == -1)
		{
			write(1, "Cannot open the dictionary.\n", 27);
			return (1);
		}
	}
	return (file);
}

void	rec_array(char *buffer, char *dictionary)
{
	int	j;

	j = 0;
	while (buffer[j] != '\0')
	{
		dictionary[j] = buffer[j];
		j++;
	}
	dictionary[j] = '\0';
}

int	main(int argc, char **argv)
{	
	int		i;	
	int		file;
	int		numbytes;
	char	buffer[1200];
	char	*dictionary;

	check_error(argc, argv);
	file = open_dict(argc, argv);
	i = 0;
	numbytes = 1;
	while (1)
	{	
		numbytes = read(file, &buffer[i], 1);
		if (numbytes == 0)
			break ;
		i++;
	}
	buffer[i] = '\0';
	dictionary = malloc(sizeof(char) * i);
	rec_array(buffer, dictionary);
	printf("dictionary:\n%s", dictionary);
	return (0);
}
