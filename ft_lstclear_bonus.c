/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-ped <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 11:18:15 by made-ped          #+#    #+#             */
/*   Updated: 2023/11/18 18:35:12 by made-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}
/*
// Función de eliminación para liberar la memoria de un puntero
void delete(void *a) {
    free(a);
}

int main() {
    // Crear nodos para la lista
    t_list *lista = ft_lstnew(strdup("Hola"));  // strdup para copiar la cadena

    ft_lstadd_back(&lista, ft_lstnew(strdup("Mundo")));  
	// strdup para copiar la cadena
    ft_lstadd_back(&lista, ft_lstnew(strdup("!!!")));   
	// strdup para copiar la cadena

    // Imprimir la lista antes de liberar la memoria
    printf("Lista antes de liberar la memoria: ");
    t_list *current = lista;
    while (current) {
        printf("%s ", (char *)current->content);
        current = current->next;
    }
    printf("\n");

    // Liberar la memoria de la lista completa
    ft_lstclear(&lista, delete);

    // Imprimir la lista después de liberar la memoria
    printf("Lista después de liberar la memoria: ");
    current = lista;
    while (current) {
        printf("%s ", (char *)current->content);
        current = current->next;
    }
    printf("\n");

    if (!lista)
        printf("Lista liberada\n");

    return 0;
}
*/
