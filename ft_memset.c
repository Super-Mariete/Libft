/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-ped <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 19:43:08 by made-ped          #+#    #+#             */
/*   Updated: 2023/11/18 18:06:30 by made-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dst, int c, size_t len)
{
	unsigned char	*p_dst;

	p_dst = (unsigned char *)dst;
	while (len--)
		*p_dst++ = (unsigned char)c;
	return (dst);
}
/*La función ft_memset recibe tres parametros
 * 1.- puntero void , es un puntero genérico a cualquier dato.
 * 2.- un entero que sera el valor a introducir en el puntero.
 * 3.- un size_t qe indica la  cantidad de veces que se debe introducir el int
 *La  funcion devuelve el puntero void.
 * Se hacee un casting para poder operar con los dos tipos de datos.
 */
