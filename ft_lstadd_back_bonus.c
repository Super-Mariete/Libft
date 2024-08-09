/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-ped <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 10:35:04 by made-ped          #+#    #+#             */
/*   Updated: 2023/11/18 18:24:11 by made-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	aux = ft_lstlast(*lst);
	aux->next = new;
}
/*
int main() {
    // Crear una lista vacía
    t_list *my_list = NULL;

    // Agregar nodos al final de la lista
    ft_lstadd_back(&my_list, (t_list *)malloc(sizeof(t_list)));
    my_list->content = "Ola";

    ft_lstadd_back(&my_list, (t_list *)malloc(sizeof(t_list)));
    my_list->next->content = "ke";

    ft_lstadd_back(&my_list, (t_list *)malloc(sizeof(t_list)));
    my_list->next->next->content = "ase!";

    // Imprimir la lista
    printf("Lista después de agregar al final: ");
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
