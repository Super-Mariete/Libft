/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-ped <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 11:50:49 by made-ped          #+#    #+#             */
/*   Updated: 2023/11/18 15:22:18 by made-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*set;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		set = f(lst->content);
		new_node = ft_lstnew(set);
		if (!new_node)
		{
			del(set);
			ft_lstclear(&new_list, (*del));
			return (new_list);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
/*

// Función de impresión para utilizar con ft_lstiter
void print_content(void *content) {
    printf("%s ", (char *)content);
}

// Función de mapeo para utilizar con ft_lstmap
void *map_content(void *content) {
    // Aquí podrías realizar alguna transformación en el contenido, 
	// por ejemplo, duplicar una cadena
    return strdup((char *)content);
}

int main() {
    // Crear nodos para la lista
    t_list *lista = ft_lstnew(strdup("Hola"));  
	// strdup para copiar la cadena

    ft_lstadd_back(&lista, ft_lstnew(strdup("Mundo")));  
	// strdup para copiar la cadena
    ft_lstadd_back(&lista, ft_lstnew(strdup("!!!!")));   
	// strdup para copiar la cadena

    // Imprimir la lista antes de aplicar la función de mapeo
    printf("Lista antes de aplicar la función de mapeo: ");
    ft_lstiter(lista, print_content);
    printf("\n");

    // Aplicar la función de mapeo a cada elemento de la lista
    t_list *nueva_lista = ft_lstmap(lista, map_content, free);

    // Imprimir la lista después de aplicar la función de mapeo
    printf("Lista después de aplicar la función de mapeo: ");
    ft_lstiter(nueva_lista, print_content);
    printf("\n");

    // Liberar la memoria de ambas listas
    ft_lstclear(&lista, free);
    ft_lstclear(&nueva_lista, free);

    if (!lista && !nueva_lista)
        printf("Listas liberadas\n");

    return 0;
}
*/
