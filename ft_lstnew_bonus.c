/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-ped <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 13:48:43 by made-ped          #+#    #+#             */
/*   Updated: 2023/11/18 18:22:54 by made-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void	*content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!(new))
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*
int main() {
    // Crear nodos para la lista
    t_list *nodo1 = ft_lstnew("Hola");
    t_list *nodo2 = ft_lstnew("Mundo");
    t_list *nodo3 = ft_lstnew("!");

    // Imprimir el contenido de los nodos
    printf("Contenido del nodo1: %s\n", (char *)nodo1->content);
    printf("Contenido del nodo2: %s\n", (char *)nodo2->content);
    printf("Contenido del nodo3: %s\n", (char *)nodo3->content);

    // Liberar la memoria asignada para los nodos
    free(nodo1);
    free(nodo2);
    free(nodo3);

    return 0;
}
*/
