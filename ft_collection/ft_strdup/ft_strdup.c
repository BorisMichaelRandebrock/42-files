#include <stdlib.h>

char    *ft_strdup(char *src)
{
		int	i;
		char	*s;

		i = 0;
		while (src[i])
				i++;
		s = (char *)malloc((i + 1) * sizeof(char));
		i = 0;
		while (src[i])
		{
				s[i] = src[i];
				i++;
		}
		if (s == NULL)
			return (NULL);
		s[i] = '\0';
		return (s);
}
