/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-ped <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 16:43:58 by made-ped          #+#    #+#             */
/*   Updated: 2023/11/18 18:02:10 by made-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned char	*p_dst;
	unsigned char	*p_src;
	size_t			i;

	p_dst = (unsigned char *)dst;
	p_src = (unsigned char *)src;
	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while ((i < dstsize - 1) && src[i])
	{
		p_dst[i] = p_src[i];
		i++;
	}
	p_dst[i] = '\0';
	return (ft_strlen(src));
}
