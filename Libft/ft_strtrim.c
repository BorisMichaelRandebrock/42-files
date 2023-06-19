/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 12:23:04 by brandebr          #+#    #+#             */
/*   Updated: 2023/06/13 11:44:31 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char	*ft_strtrim(char const *s1, char const *set)
{
	int			i;
	int			j;
	int			trim_len;
	const char	*trim;
	char	*trimmed;

	i = 0;
	j = 0;
	trim_len = ft_strlen(s1);
	trim = malloc((trim_len + 1) * sizeof(char));
    if (trim == NULL)
        return (NULL);
	while (s1[i])
	{
		if (s1[i] == set)
					i++;
	}
	while (s1[i])
		trim[j] = s1[i];
	trim_len = ft_strlen(trim);
	while (trim[trim_len] == &set)
		trim_len--;
	while (trim_len)
	{
		trimmed[trim_len] = s[trim_len];
		trim_len--;
	}
	return (trim);
}*/
static int	is_set_character(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && is_set_character(s1[start], set))
		start++;
	while (end > start && is_set_character(s1[end], set))
		end--;
	return (ft_substr(s1, start, end - start + 1));
}
/*
int	main(void)
{
	char	str[] = "******supercalifragil*******";
	char	*result = ft_strtrim(str, "*");

	puts(result);
	printf("\n%s", result);
	return (0);
}*/
