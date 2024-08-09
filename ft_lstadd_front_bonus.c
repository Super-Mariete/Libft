/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-ped <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 10:01:44 by made-ped          #+#    #+#             */
/*   Updated: 2023/11/18 18:30:20 by made-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*
int main() {
    // Crear una lista vacía
    t_list *my_list = NULL;

    // Agregar nodos al principio de la lista
    ft_lstadd_front(&my_list, (t_list *)malloc(sizeof(t_list)));
    my_list->content = "GPT-3";

    ft_lstadd_front(&my_list, (t_list *)malloc(sizeof(t_list)));
    my_list->next->content = "OpenAI";

    ft_lstadd_front(&my_list, (t_list *)malloc(sizeof(t_list)));
    my_list->next->next->content = "Hola";

    // Imprimir la lista
    printf("Lista después de agregar al frente: ");
    t_list *current = my_list;
    while (current) {
        printf("%s ", (char *)current->content);
        current = current->next;
    }
    printf("\n");

    // Liberar la memoria de la lista completa
    while (my_list) {
        t_list *temp = my_list;
        my_list = my_list->next;
        free(temp);
    }

    return 0;
}
*/
