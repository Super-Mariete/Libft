/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-ped <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:01:19 by made-ped          #+#    #+#             */
/*   Updated: 2023/11/11 17:03:52 by made-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p_s1;
	unsigned char	*p_s2;

	p_s1 = (unsigned char *)s1;
	p_s2 = (unsigned char *)s2;
	while (n--)
	{
		if (*p_s1 != *p_s2)
			return (*p_s1 - *p_s2);
		p_s1++;
		p_s2++;
	}
	return (0);
}
/*La función ft_memcmp recibe tres parametros 
 * 1,- Un puntero a una string indeterminada
 * 2.- Otro puntero a una string indeterminada
 * 3.- Un size_t que define el numero de bytes a comparar.
 * La funnción compara los deo string casteados a unsigned char
 * Si no encuentra diferencia devuelve 0
 * Si la encuentra devueve el vaor de la primera string meos el valor de la 
 * segunda, restando sus valores en ascii
 */
