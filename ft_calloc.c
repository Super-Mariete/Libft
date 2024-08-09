/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-ped <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 09:54:58 by made-ped          #+#    #+#             */
/*   Updated: 2023/11/18 18:05:45 by made-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	p = malloc(count * size);
	if (!p)
		return (NULL);
	ft_bzero(p, count * size);
	return (p);
}
/*
int	main(void)
{
	size_t i = 3;
	size_t j = sizeof(size_t);
	size_t count = 3;
	char *arr = (char *)ft_calloc(i, j);
	arr[0] = '1';
	arr[1] = '3';
	arr[2] = '5';
	i = 0;
	while (i < count)
	{
		printf("arr[%zu] = %c  ", i, arr[i]);
		i++;
	}
	printf("\n");
	arr = ft_calloc(i, j);
	i = 0;
	while (i < count)
	{
		printf("arr[%zu] = %d  ", i , arr[i]);
		i++;
	}
	free(ft_calloc(i, j));
	free(arr);
	system("leaks ft_calloc");
	return (0);
}
*/
/*    
 *La función calloc() asigna contiguamente espacio suficiente para contar
   objetoso de tamaño byte y devuelve un puntero a la memoria asignada.
   La memoria asignada se llena con bytes de valor cero.
   La función free() desasigna la asignación de memoria apuntada por p. Si p
   es un puntero NULL, no se realiza ninguna operación.
   SIZE_MAX es una constante definida en C y representa el valor máximo que 
   puede tener un objeto de tipo size_t. Si cualquiera de los dos es igual a 
   SIZE_MAX, significa que la multiplicación count * size podría resultar en un
   desbordamiento de capacidad, por lo que la función devuelve NULL. Esta 
   comprobación es importante para evitar errores de desbordamiento.
*/
