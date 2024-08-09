/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-ped <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 20:48:07 by made-ped          #+#    #+#             */
/*   Updated: 2023/11/12 12:04:47 by made-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	return (ft_memmove(dst, src, n));
}
/*ft_memcpy copia dos string hasta una cantidad de bytes maracada por size_t
 * como no tiene en cuenta el solapamiento es mejor usar memmove
 */
