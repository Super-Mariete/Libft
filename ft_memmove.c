/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-ped <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 20:52:38 by made-ped          #+#    #+#             */
/*   Updated: 2023/11/18 17:51:11 by made-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*p_dst;
	unsigned char	*p_src;

	p_dst = (unsigned char *)dst;
	p_src = (unsigned char *)src;
	if (p_dst == p_src || len == 0)
		return (dst);
	if (p_dst < p_src || p_dst >= p_src + len)
	{
		while (len--)
			*p_dst++ = *p_src++;
	}
	else
	{
		p_dst += len;
		p_src += len;
		while (len--)
			*--p_dst = *--p_src;
	}
	return (dst);
}
/*La función ft_memmove recibe tres parametros 
 * 1.-Un string dst donde copirará el string src
 * 2.-Unn string src quuee deberá  ser copiado
 * 3.-Un size_t len que es la cantidad de bytes que debe copiar
 * Lo primero que hace es comprobar s llas string se solapan
 * En caso de que se solapen copia de derecha a izquierda para evitarlo
 * En caso de que no lo hagan copia normamente de dercah a izquierda
 * Devuelve el puntero voiid con la nueva string
 */
