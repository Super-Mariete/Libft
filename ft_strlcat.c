/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-ped <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 20:55:23 by made-ped          #+#    #+#             */
/*   Updated: 2023/11/18 17:59:35 by made-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;

	len_dst = (ft_strlen(dst));
	len_src = (ft_strlen(src));
	if (dst == NULL || dstsize == 0)
		return (len_src);
	if (len_dst >= dstsize)
		return (len_src + dstsize);
	else
		dstsize -= len_dst;
	ft_strlcpy(dst + len_dst, src, dstsize);
	return (len_dst + len_src);
}
