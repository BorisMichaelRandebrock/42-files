int	check(char c)
{	
		if (c >= '0' && c <= '9')
				return (1);
		if (c >= 'A' && c <= 'F')
				return (1);
		if (c >= 'a' && c <= 'f')
				return (1);
		return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
		int		i;
		int		res;
		int		sign;	

		i = 0;
		res = 0;
		sign = 1;

		if (str[0] == '-')
		{
				sign *= -1;
				i++;
		}
		while (str[i]/* &&  check(str[i]) == 1*/)
		{
				res *= str_base;
				if (str[i] >= '0' && str[i] <= '9')
						res += str[i] - '0';
				else if (str[i] >= 'A' && str[i] <= 'F')
						res += str[i] - '7';
				else if (str[i] >= 'a' && str[i] <= 'f')
						res += str[i] - 'W';
				i++;
		}
		return (res * sign);
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int	i;
	(void)argc;
		i = atoi(argv[2]);
		printf("Returned: %i\n", ft_atoi_base(argv[1], i));
}
