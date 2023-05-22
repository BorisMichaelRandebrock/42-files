/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:52:23 by brandebr          #+#    #+#             */
/*   Updated: 2023/05/22 18:04:05 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int	ok_a;
	int	ok_b;
	int	ok_c;
	int	ok_d;
	const char src[50] = "supercalifralilisticoespidalidoso";
	char dest[50];
	int i, * ptr, sum = 0;
	char s[] = "lorem ipsum seetasdasdsda123456789xthis is a pedazo of string";
	int	test;
	int 	test2;

	
	test = open("example.txt", O_WRONLY);
//	ft_putchar_fd('*', test);
//	test2 = open("example.txt", O_APPEND);
	test2 = open("example.txt", O_WRONLY);
//	write(1, &src, ft_strlen(src));
	ft_substr(s, 0, 10);
	ft_putchar_fd('*', test);
	ft_putstr_fd(s, test2);
	ft_putnbr_fd(-2147483647 -1, test);
	puts("\n");
 	ptr = calloc(10, sizeof(int));
        if (ptr == NULL) {
            printf("Error! memory not allocated.");
            exit(0);
        }
        printf("Bud calculating the sequence sum of the first 10 terms \n ");
        for (i = 0; i < 10; ++i) { * (ptr + i) = i;
            sum += * (ptr + i);
        }
        printf("Sum = %d", sum);
        free(ptr);
	strcpy(dest,"Heloooo!!");
	printf("Before memcpy dest = %s\n", dest);
	ft_memcpy(dest, src, strlen(src)+1);
	printf("After memcpy dest = %s\n", dest);
	ok_a = ft_atoi(" --   +42");
	ok_b = ft_atoi("-2147cd483");
	ok_c = ft_atoi("2147483647");
	ok_d = ft_atoi("   +42");
	puts("Hello world ");
	printf("%i", ok_a);
	printf("\n" );
	printf("%i", ok_b);
	printf("\n" );
	printf("%i", ok_c);
	printf("\n");
	printf("%i", ok_d);
	printf("%d", atoi("--123"));
	printf("%s", ft_strjoin(src, s));
	printf("%s", ft_strtrim("----hola---", "-"));
	printf("%s", ft_substr("hola", 2, 30));
	printf("%s", *ft_split("\nasdasdasd5I really, really wanna know", '5'));
	printf("\n%s", ft_itoa(-2147483648));
//	printf("%s", *split("\nasdasdasd5I really, really wanna know", '5'));
	return (0)-12345678;
}
/*
	char	str1[] = "something else entirely";
	char	s[]= "hola que tal";
	char 	c;
	char	*new;
		char *str = "the cake is a lie !\0I'm hidden lol\r\n";
 	char buff1[0xF00];
 	char buff2[0xF00];
 	size_t r1;
 	size_t r2;

	c = '$';
	new = ft_memset(str1, c, 5);
	puts(s);
	ft_memset(str1, '$',5);
	puts(s);
	printf(" ft_memset: %s", new);*/
//	printf(" ft_memchr: %s", str);
/*	puts(ft_memchr("bonjoout", 'n', 4));
	return (0);
}*/
//	char	str;
//	str1 = "something else entirely";
	//printf("%p %p", s, ft_strrchr(s, 'z'));
	//printf("strrch %c\n", strrchr("so \0ma\0in t\0his stri\0ng !", '\0')[1]);
	//printf("strle %lu", strlen("there\0ma\0ny \0 \\0 in t\0his stri\0ng !"));
	//printf("\n strncmp %d", ft_strncmp("Hopa", "Hola", 3));
	//printf("\n strncmp %d", strncmp("Hopa", "Hola", 3));
/* algo = ft_strlen("supercalifragilisticoespiralidoso");
   printf("%d", ft_isalpha(str));
 	printf(" is alpha \n" );
	printf("%d", ft_isalnum(str));
	printf(" is allnum \n");
   	printf("%d", ft_isdigit(str));
   	printf(" is isdigit \n");
   	printf("%d", ft_isascii(str));
   	printf(" is isascii \n");
   	printf("%d", ft_isprint(str));
    printf(" is isprint \n");
    printf("%c", ft_toupper(str));
    printf(" is toupper \n");
    printf("%c", ft_tolower(str));
    printf(" is tolower \n");
    str1 = "este";
    printf("%p %p", str1, ft_strchr(str1, 't' + 256));
    printf(" is strchr  \n");
    printf("%p %p", str1, ft_strrchr(str1, 't' + 256));
    printf(" is strrchr \n");
    printf("%p %p", s, ft_strrchr(s, 'z'));
  */
