/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:17:06 by brandebr          #+#    #+#             */
/*   Updated: 2023/11/30 19:28:24 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
		t_list	*aux;
		t_list	*tmp;

		aux = *begin_list;
		while (aux->next)
		{
				if ((*cmp)(aux->next->data, data_ref) == 0)
				{
						tmp = aux->next;
						aux->next = aux->next->next;
						free(tmp);
				}
				aux = aux->next;
		}
		//*begin_list = *aux;
}

int compare_data(void *a, void *b) {
		// You can define your own comparison logic here
		// For this example, we'll compare integers
		int *int_a = (int *)a;
		int *int_b = (int *)b;
		return (*int_a - *int_b);
}

int main() {
		// Create a sample linked list
		t_list *list = NULL;
		int data[] = {10, 20, 30, 40, 30, 50};

		for (unsigned long i = 0; i < sizeof(data) / sizeof(data[0]); i++) {
				t_list *new_node = (t_list *)malloc(sizeof(t_list));
				new_node->data = &data[i];
				new_node->next = list;
				list = new_node;
		}

		// Display the initial linked list
		printf("Initial Linked List: ");
		t_list *current = list;
		while (current != NULL) {
				printf("%d -> ", *((int *)current->data));
				current = current->next;
		}
		printf("NULL\n");

		// Define the condition for removal
		int target = 30;

		// Remove elements matching the condition
		ft_list_remove_if(&list, &target, compare_data);

		// Display the modified linked list
		printf("Modified Linked List: ");
		current = list;
		while (current != NULL) {
				printf("%d -> ", *((int *)current->data));
				current = current->next;
		}
		printf("NULL\n");

		// Free memory (not shown in this example, but it's important to free allocated memory)

		return 0;
}
