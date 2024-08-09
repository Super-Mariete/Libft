/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-ped <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 10:21:02 by made-ped          #+#    #+#             */
/*   Updated: 2023/11/18 18:27:33 by made-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
int main() {
    // Crear una lista vacía
    t_list *my_list = NULL;

    // Agregar nodos a la lista
    my_list = (t_list *)malloc(sizeof(t_list));
    my_list->content = "Ola";
    my_list->next = (t_list *)malloc(sizeof(t_list));
    my_list->next->content = "ke";
    my_list->next->next = (t_list *)malloc(sizeof(t_list));
    my_list->next->next->content = "ase?";
    my_list->next->next->next = NULL;

    // Imprimir la lista
    printf("Lista: ");
    t_list *current = my_list;
    while (current) {
        printf("%s ", (char *)current->content);
        current = current->next;
    }
    printf("\n");

    // Obtener y mostrar el último nodo de la lista
    t_list *last_node = ft_lstlast(my_list);
    if (last_node)
        printf("Último nodo de la lista: %s\n", (char *)last_node->content);
    else
        printf("La lista está vacía.\n");

    // Liberar la memoria de la lista completa
    while (my_list) {
        t_list *temp = my_list;
        my_list = my_list->next;
        free(temp);
    }

    return 0;
}
*/
