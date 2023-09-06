#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

char	*find_first(char *str, int word_number)
{
	int	i;
	char	*word;

	i = 0;
	word = (char *)malloc(word_number * sizeof(char));
	if (!str)
		free(word);
	while (i < word_number)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

int	first_length(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != ' ')
	{
		i++;
	}
	return (i);
}

char	*string(char *str, int	start)
{
	char	*new_string;
	int	i;
	
	i = 0;
	start = first_length(str);
	while (str[start] == ' ')
		start++;
	new_string = (char *)malloc(200 * sizeof(char));
	if (!new_string)
		free(new_string);
	while (str[start])
	{
		new_string[i] = str[start];
		start++;
		i++;
	}
	return (new_string);
}

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i])
			write(1, &s[i++], 1);
	}
}
void	rostring(char *str)
{
	int	first;
	char	*word;
	char	*firstprint;

	first = first_length(str);
	word = find_first(str, first); 
	firstprint = string(str, first);
	printf("%s", firstprint);
	printf(" ");
	printf("%s", word);
}

int	main(int argc, char **argv)
{
    if (argc == 2)
    {
        rostring(argv[1]);
    } else
	    write(1, "\n", 1);
    return (0);
}
