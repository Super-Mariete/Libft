/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-ped <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 10:14:04 by made-ped          #+#    #+#             */
/*   Updated: 2023/11/18 13:01:04 by made-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*
int main() 
{
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
    while (current) 
	{
        printf("%s ", (char *)current->content);
        current = current->next;
    }
    printf("\n");

    // Calcular y mostrar el tamaño de la lista
    int size = ft_lstsize(my_list);
    printf("Tamaño de la lista: %d\n", size);

    // Liberar la memoria de la lista completa
    while (my_list) 
	{
        t_list *temp = my_list;
        my_list = my_list->next;
        free(temp);
    }

    return 0;
}
*/
