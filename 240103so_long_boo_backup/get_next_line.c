/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 19:09:57 by brandebr          #+#    #+#             */
/*   Updated: 2023/12/30 13:16:14 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft/libft.h"

static char	*clear_buffer(char *buffer, char *line)
{
	int		i;
	int		j;
	char	*willy;

	i = ft_strlen(line);
	j = ft_strlen(buffer);
	if (j - i <= 0)
	{
		free(buffer);
		return (NULL);
	}
	willy = malloc(j - i + 1);
	if (!willy)
	{
		free(buffer);
		return (NULL);
	}
	j = 0;
	while (buffer[i] != '\0')
		willy[j++] = buffer[i++];
	willy[j] = '\0';
	free(buffer);
	return (willy);
}

static char	*kill(char *store, char *warehouse)
{
	free(store);
	free(warehouse);
	return (NULL);
}

static char	*read_file(int fd, char *warehouse)
{
	char	*store;
	int		bytes_read;

	store = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!store)
	{
		free(warehouse);
		return (NULL);
	}
	bytes_read = 1;
	while (bytes_read > 0 && !ft_strchr(warehouse, '\n'))
	{
		bytes_read = read(fd, store, BUFFER_SIZE);
		if (bytes_read == -1)
			return (kill(store, warehouse));
		if (bytes_read > 0)
		{
			store[bytes_read] = '\0';
			warehouse = ft_strjoin(warehouse, store);
		}
	}
	free(store);
	return (warehouse);
}

static char	*get_line(char *buffer)
{
	char	*line;
	int		i;

	i = 0;
	if (buffer[i] == '\0')
		return (NULL);
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (buffer[i] == '\n')
		i++;
	line = malloc((i + 1) * sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
	{
		line[i] = buffer[i];
		i++;
	}
	if (buffer[i] != '\0')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*buffer = NULL;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = read_file(fd, buffer);
	if (!buffer)
		return (NULL);
	line = get_line(buffer);
	if (!line)
	{
		free(buffer);
		buffer = (NULL);
	}
	else
		buffer = clear_buffer(buffer, line);
	return (line);
}
/*
int main(void)
{
	char *line;
	int fd;

	fd = open("./fsoares/variable_nls.txt", O_RDONLY);
		line = get_next_line(fd);
	while (line)
	{
		printf("%s", line);
		free(line);
		line = get_next_line(fd);
	}
	close(fd);
	return 0;
}
*/
