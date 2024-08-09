/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-ped <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 11:14:47 by made-ped          #+#    #+#             */
/*   Updated: 2023/11/11 17:03:26 by made-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s1, int c, size_t n)
{
	unsigned char	*p_s1;

	p_s1 = (unsigned char *)s1;
	while (n--)
	{
		if (*p_s1 == (unsigned char)c)
			return (p_s1);
		p_s1++;
	}
	return (NULL);
}
/* La función ft_memchr recibe como parámetros
 * 1.- un puntero a un dato indeterminado void
 * 2.-un entero a comparar en la cadena
 * 3.-un size_t que limita la cantidad de bites a comparar
 * Si no encuetra coincidencias devuelve un puntero null
 * Si encuentra el entero en la cadena situa el puuntero en esa psición y lo 
 * devuelve
*/
