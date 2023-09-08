/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 10:50:59 by brandebr          #+#    #+#             */
/*   Updated: 2023/09/08 15:46:53 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <unistd.h>

 void    ftputc(char c)
 {
         write(1, &c, 1);
 }

 int     main(int argc, char **argv)
 {
         int     i;
         char    *str;

         i = 0;
         if (argc != 2)
	 {
                 write(1, "\n", 1);
		 return (0);
	 }
         str = argv[1];
         while (argv[1][i])
         {
                 if (str[i] == 'z' || str[i] == 'Z')
                         ftputc(str[i++] - 25);
                 else if ((str[i] >= 'a' && str[i] <= 'y') || (str[i] >= 'A' && str[i] <= 'Y'))
                         ftputc(str[i++] + 1);
                 else
                         ftputc(str[i++]);
         }
         write(1, "\n", 1);;
         return (0);
 }

