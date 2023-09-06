/*#include <stdio.h>
#include <unistd.h>

int	main(int argc, int argv)
{
	int one,
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	
		write(1, "\n", 1);
		write(1, "\n", 1);
		write(1, "\n", 1);
		write(1, "\n", 1);
		write(1, "\n", 1);
		write(1, "\n", 1);
		write(1, "\n", 1);
		write(1, "\n", 1);
		write(1, "\n", 1);

}
*/
#include <unistd.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int len = 0;
    while (str[len])
        len++;
    return (len);
}

void ft_putnbr(int n)
{
    char    c;

    if (n < 0)
    {
        write(1, "-", 1);
        n *= -1;
    }
    if (n >= 10)
        ft_putnbr(n / 10);
    c = (n % 10) + '0';
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int	i;
	
	i = 1;
    	if (argc == 2)
    	{
        int number = atoi(argv[1]);

  //      if (number > 0 && number <= 9)
    //    {
         while   (i <= 9)
         {
             ft_putnbr(i);
              write(1, " x ", 3);
              ft_putnbr(number);
              write(1, " = ", 3);
              ft_putnbr(i * number);
             write(1, "\n", 1);
		i++;
            }
 //       }
    }
    else
        write(1, "\n", 1);
    return (0);
}

