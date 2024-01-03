/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 14:39:40 by brandebr          #+#    #+#             */
/*   Updated: 2023/09/27 17:57:56 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	void	*new_content;

	new_lst = NULL;
	if (lst && f && del)
	{
		while (lst)
		{
			new_content = f(lst -> content);
			new_node = ft_lstnew(new_content);
			if (!new_node)
			{
				free(new_content);
				ft_lstclear(&new_lst, del);
				return (0);
			}
			ft_lstadd_back(&new_lst, new_node);
			lst = lst -> next;
		}
	}
	return (new_lst);
}
/*
void	*add_one(void *num)
{
	int *n = (int *)num;
	int *result = (int *)malloc(sizeof(int));
	if (result)
		*result = *n + 1;
	return result;
}

void	print_list(t_list *list)
{
	while (list)
	{
		printf("%d ", *((int *)list->content));
		list = list->next;
	}
	printf("\n");
}

void	print_string(t_list *list)
{
	while (list)
	{
		printf("%c ", *((char *)list->content));
		list = list->next;
	}
	printf("\n");
}

void	*string(void *str)
{
    char	*silly = (char *)str;
    int		len;
    char	*res;

    len = ft_strlen(silly);
    res = (char *)malloc(sizeof(char) * (len + 1));
    if (!res)
        return NULL;
	
    char *s = silly;
    char *r = res;
    while (*s)
    {
        if (*s == 'z')
            *r = 'a';
        else if (*s == 'Z')
            *r = 'A';
        else if ((*s >= 'a' && *s < 'z') || (*s >= 'A' && *s < 'Z'))
            *r = *s + 1;
        else
            *r = *s;

        s++;
        r++;
    }

    *r = '\0';
    return (res);
}

void	*to_upper_case(void *c)
{
	char	*willy;
	char	*result;; 
	
	willy = (char *)c;
	if (!willy)
		return NULL;
	result = willy;
	while (*willy)
	{
	if ((*willy >= 'a') && (*willy <= 'z'))
		*willy = *willy -32;
	else
		*willy = *willy;
	willy++;
	}
	return (result);
}

int	main(void)
{
	t_list	*list = NULL;
	t_list	*someth = NULL;
	int	num1 = 1;
	int	num2 = 2;
	int	num3 = 3;
	char	h = 'h';
	char	a = 'a';
	char	l = 'l';


	ft_lstadd_back(&list, ft_lstnew(&num1));
	ft_lstadd_back(&list, ft_lstnew(&num2));
	ft_lstadd_back(&list, ft_lstnew(&num3));
	ft_lstadd_back(&someth, ft_lstnew(&h));
	ft_lstadd_back(&someth, ft_lstnew(&a));
	ft_lstadd_back(&someth, ft_lstnew(&l));
	printf("Initial list: ");
	print_list(list);
	print_string(someth);
	t_list *new_list = ft_lstmap(list, add_one, free);
	t_list *new_str = ft_lstmap(someth, string, free);
	print_list(new_list);
	print_string(new_str);
	t_list *upper =	ft_lstmap(new_str, to_upper_case, free);
	print_string(upper);
	if (new_list)
	{
		printf("Mapped list: ");
		print_list(new_list);
	}
	return 0;
}

*/
/* WORKING WIT FOR LOOP
void *string(void *str)
{
    char *silly = (char *)str;
    int len = ft_strlen(silly);
    char *res = (char *)malloc(sizeof(char) * (len + 1));
    if (!res)
        return NULL;

    for (int i = 0; i < len; i++)
    {
        if (silly[i] == 'z')
            res[i] = 'a';
        else if (silly[i] == 'Z')
            res[i] = 'A';
        else if ((silly[i] >= 'a' && silly[i] < 'z') || (silly[i] >= 'A' &&\
				silly[i] < 'Z'))
            res[i] = silly[i] + 1;
        else
            res[i] = silly[i];
    }

    res[len] = '\0';
    return res;
}
*/
//		t_list *temp = new_list;
/*		while (temp)
		{
			t_list *next = temp->next;
			free(temp->content);
//			free_int(temp->content);
			free(temp);
			temp = next;
		}
		
*/
