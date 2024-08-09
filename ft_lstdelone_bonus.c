/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-ped <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 10:52:45 by made-ped          #+#    #+#             */
/*   Updated: 2023/11/18 15:20:10 by made-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}
/*
void delete(void * a)
{
	free(a);
}

int main() {
    // Crear nodos para la lista
    t_list *lista = ft_lstnew(strdup("Hola"));  
	// strdup para copiar la cadena

    ft_lstadd_back(&lista, ft_lstnew(strdup("Mundo")));  
	// strdup para copiar la cadena

    // Imprimir la lista antes de eliminar el nodo
    printf("Lista antes de eliminar el nodo: ");
    t_list *current = lista;
    while (current) {
        printf("%s ", (char *)current->content);
        current = current->next;
    }
    printf("\n");

    // Eliminar el último nodo
    t_list *last_node = ft_lstlast(lista);
    ft_lstdelone(last_node, delete);

    // Imprimir la lista después de eliminar el nodo
    printf("Lista después de eliminar el nodo: ");
    current = lista;
    while (current) {
        printf("%s ", (char *)current->content);
        current = current->next;
    }
    printf("\n");

    // Liberar la memoria de la lista completa
    while (lista) {
        t_list *temp = lista;
        lista = lista->next;
        free(temp->content);
        free(temp);
    }

    if (!lista)
        printf("Nodo liberado\n");

    return 0;
}
*/
