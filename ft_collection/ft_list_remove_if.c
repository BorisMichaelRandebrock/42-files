/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prueba.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:40:30 by brandebr          #+#    #+#             */
/*   Updated: 2023/11/02 18:54:59 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

// Define the structure for the linked list node
typedef struct t_list {
    void *data;
    struct t_list *next;
} t_list;

// Function to compare data elements
int compare_data(void *a, void *b) {
    // You can define your own comparison logic here
    // For this example, we'll compare integers
    int *int_a = (int *)a;
    int *int_b = (int *)b;
    return (*int_a - *int_b);
}
/*
// Function to remove elements matching a condition
void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	if (begin_list == NULL || *begin_list == NULL)
		return;

	t_list *cur = *begin_list;

	if (cmp(cur->data, data_ref) == 0)
	{
		*begin_list = cur->next;
		free(cur);
		printf("Ahora begin list = %i\n", *((int *)(*begin_list)->data));
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	cur = *begin_list;
	ft_list_remove_if(&cur->next, data_ref, cmp);
}    // Implementation of ft_list_remove_if
    // (You can use the provided code for this function)
*/
void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)()) {
    if (*begin_list == NULL) {
        return;  // Lista vacía, no hay nada que hacer
    }

    while (*begin_list != NULL && cmp((*begin_list)->data, data_ref) == 0) {
        // El nodo a eliminar es el primer nodo
        t_list *temp = *begin_list;
        *begin_list = (*begin_list)->next;
        free(temp);
    }

    if (*begin_list == NULL) {
        return;  // La lista está vacía después de eliminar el primer nodo
    }

    t_list *current = *begin_list;
    
    while (current->next != NULL) {
        if (cmp(current->next->data, data_ref) == 0) {
            // Encontramos un nodo que coincide con data_ref, lo eliminamos
            t_list *temp = current->next;
            current->next = current->next->next;
            free(temp);
        } else {
            current = current->next;
        }
    }
}


int main() {
    // Create a sample linked list
    t_list *list = NULL;
    int data[] = {10, 20, 30, 40, 30, 50};

    for (int i = 0; i < sizeof(data) / sizeof(data[0]); i++) {
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

