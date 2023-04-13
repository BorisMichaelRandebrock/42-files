/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

		i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] -32;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char	string[] = "abcdefghijklmnopqrstuvwxyz";
	char    *x;
	//	write(1, "\n", 1);
	
	write(1, string, 27);
	write(1, "\n", 1);

	//printf("%s \n" , string);
	ft_strupcase(string);
	x = string;
	x = "hola";
	//printf("%s" , ft_strupcase(string));
	//write (1, string, 27);
	write(1, x, 27);
	return (0);
}

