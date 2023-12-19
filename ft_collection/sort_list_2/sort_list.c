/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 10:53:56 by brandebr          #+#    #+#             */
/*   Updated: 2023/12/13 15:41:53 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
//#include "list.h"
typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

int		ok(char c)
{
		if (c != ' ' && c != '\t' && c != '\0' && c != '\n')
				return (1);
		return (0);
}

int		wc(char *s)
{
		int		i;
		int		w;

		i = 0;
		w = 0;
		while (s[i])
		{
				if ((i == 0 && ok(s[i])) || (ok(s[i]) && !ok(s[i - 1])))
						w++;
				i++;
		}
		return (w);
}
int		nc(int n)
{
		int		ns;

		ns = 0;
		if (n == -2147483648)
				return (11);
		if (n < 0)
		{
				ns++;
				n *= -1;
		}
		while (n > 0)
		{
				ns++;
				n /= 10;
		}
		return (ns);

}

char	*ft_itoa(int nbr)
{
		char	*res;
		int		nbs;

		nbs = nc(nbr);
		res = malloc(sizeof(char) * (nbs + 1));
		if (!res)
				free(res);
		res[nbs] = '\0';
		if (nbr == -2147483648)
		{
				res = "-2147483648";
				return (res);
		}
		if (nbr < 0)
		{
				res[0] = '-';
				nbr *= -1;
		}
		nbs--;
		while (nbr > 9)
		{
				res[nbs] = (nbr % 10) + '0';
				nbr /= 10;
				nbs--;
		}
		res[nbs] = (nbr % 10) + '0';
		return (res);
}

char    **ft_split(char *str)
{
		char	**res;
		int		words;
		int		w;
		int		i;
		int		j;
		int		start;
		int		end;

		words = wc(str);
		w = 0;
		i = 0;
		res = (char **)malloc(sizeof(char *) * (words + 1));
		if (!res)
				res = NULL;
		while (w < words)
		{
				if ((i == 0 && ok(str[i])) || (ok(str[i]) && !ok(str[i - 1])))
				{
						j = 0;
						start = i;
						end = start;
						while (ok(str[end]))
								end++;
						res[w] = (char *)malloc(sizeof(char) * ((end - start) + 1));
						if (!res[w])
								free(res[w]);
						while (start < end)
						{
								res[w][j] = str[start];
								start++;
								j++;
						}
						res[w][j] = '\0';
						w++;
				}				
				i++;
		}
		res[words] = NULL;
		return (res);
}

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
		t_list	*aux;

		aux = begin_list;
		while (aux)
		{
				if (aux->data)
						(*f)(aux->data);
				aux = aux->next;
		}
}

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
		t_list	*aux;
		t_list	*tbd;
		t_list	*prev;

		aux = *begin_list;
		prev = NULL;
		while (aux)
		{
				if ((*cmp)(aux->data, data_ref) == 0)
				{
						tbd = aux;
						if (prev == NULL)
								*begin_list = aux->next;
						else
								prev->next = aux->next;
						aux = aux->next;
						free(tbd);
				}
				else
				{
						prev  = aux;
						aux = aux->next;
				}

		}
}

int		cmp(void *c, void *d)
{
		int *a = (int *)c;
		int *b = (int *)d;
		return (*a - *b);
}

int		main(int argc, char **argv)
{
		t_list *l;
	
//		char	**res;
//		int i = 0;
		if (argc == 2)
		{
				int nss = atoi(argv[1]);
				char *re = ft_itoa(nss);
				printf("number of numbers inn number: %i \n", nc(nss));
				printf("%s\n", re);
		/*		printf("the number of words is: %i\n",wc(argv[1]));
				res = ft_split(argv[1]);
				while (res[i])
						printf("%s\n", res[i++]);
	*/	}
		
		l = malloc(sizeof(t_list));
		l->data = ("This is ");
		l->next = malloc(sizeof(t_list));
		l->next->data = ("the first ");
		l->next->next = malloc(sizeof(t_list));
		l->next->next->data = ("list: \n");
		ft_list_foreach(l, (void *)printf);
		t_list *l1;
		int	tbd = 42;
		int numbers[] = {42, 13, 42};

		l1 = malloc(sizeof(t_list));
		l1->data = &numbers[0];
		l1->next = malloc(sizeof(t_list));
		l1->next->data = &numbers[1];
		l1->next->next = malloc(sizeof(t_list));
		l1->next->next->data = &numbers[2];
		printf("%d\n", *(int *)l1->data);
		printf("%d\n", *(int *)l1->next->data);
		printf("%d\n", *(int *)l1->next->next->data);
		ft_list_remove_if(&l1, &tbd,  cmp);
		printf("new list left with only onne number: %d\n", *(int *)l1->data);
		//printf("new list: %d\n", *(int *)l1->next->data);
		//printf("%d\n", *(int *)l1->next->data);
	//	printf("%d\n", *(int *)l1->next->next->data);
	//	ft_list_foreach(l1, (int *)printf);
}


/*
typedef struct s_list t_list;

struct s_list
{
	int     data;
	t_list  *next;
};

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
		int		swap;
		t_list	*start;
				
		start = lst;
		while (lst->next)
		{
				if ((*cmp)(lst->data, lst->next->data) == 0)
				{
						swap = lst->data;
						lst->data = lst->next->data;
						lst->next->data = swap;
						lst = start;		
				}
				else
						lst = lst->next;

		}
		lst = start;
		return (lst);
}

int		com(int a, int b)
{
		if (a > b)
				return (0);
		return (1);
}

int		main(void)
{
		t_list	*lst;
		t_list	*aux;
		int		numb[] = {5, 3, 18, 6, 5, 2};
		int		i;

		i = 0;
		lst = malloc(sizeof(t_list));
		lst->data = numb[0];
		lst->next = malloc(sizeof(t_list));
		lst->next->data = numb[1];
		lst->next->next = malloc(sizeof(t_list));
		lst->next->next->data = numb[2];
		lst->next->next->next = malloc(sizeof(t_list));
		lst->next->next->next->data = numb[3];
		lst->next->next->next->next = malloc(sizeof(t_list));
		lst->next->next->next->next->data = numb[4];
		lst->next->next->next->next->next = malloc(sizeof(t_list));
		lst->next->next->next->next->next->data = numb[5];
		lst->next->next->next->next->next->next = NULL;
		aux = lst;
		printf("%d\n", lst->data);
		printf("%d\n", lst->next->data);
		printf("%d\n", lst->next->next->data);
		printf("%d\n", lst->next->next->next->data);
		printf("%d\n", lst->next->next->next->next->data);
		printf("%d\n", lst->next->next->next->next->next->data);
		while (lst)
		{
				printf("%d\n", lst->data);
				lst = lst->next;
		}
		lst = aux;
		printf("ordered list: \n");
		sort_list(lst, com);
		printf("%d\n", lst->data);
		printf("%d\n", lst->next->data);
		printf("%d\n", lst->next->next->data);
		printf("%d\n", lst->next->next->next->data);
		printf("%d\n", lst->next->next->next->next->data);
		while (lst)
		{
				printf("%d\n", lst->data);
				lst = lst->next;
		}
		return (0);
}*/
