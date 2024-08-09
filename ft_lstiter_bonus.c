/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-ped <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 11:28:05 by made-ped          #+#    #+#             */
/*   Updated: 2023/11/18 18:31:41 by made-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
// Función de impresión para utilizar con ft_lstiter
void print_content(void *content) {
    printf("%s ", (char *)content);
}

int main() {
    // Crear nodos para la lista
    t_list *lista = ft_lstnew(strdup("Hola"));  // strdup para copiar la cadena

    ft_lstadd_back(&lista, ft_lstnew(strdup("Mundo")));  
	// strdup para copiar la cadena
    ft_lstadd_back(&lista, ft_lstnew(strdup("!!!!")));   
	// strdup para copiar la cadena

    // Imprimir la lista antes de aplicar la función
    printf("Lista antes de aplicar la función: ");
    t_list *current = lista;
    while (current) {
        printf("%s ", (char *)current->content);
        current = current->next;
    }
    printf("\n");

    // Aplicar la función a cada elemento de la lista
    ft_lstiter(lista, print_content);

    // Imprimir la lista después de aplicar la función
    printf("\n");

    // Liberar la memoria de la lista completa
    ft_lstclear(&lista, free);

    if (!lista)
        printf("Lista liberada\n");

    return 0;
}
*/
