/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-ped <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 12:43:31 by made-ped          #+#    #+#             */
/*   Updated: 2023/11/12 12:12:41 by made-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*needle || (haystack == NULL && !len))
		return ((char *)haystack);
	while (*(haystack + i) && i < len)
	{
		j = 0;
		while (*(haystack + i + j) == *(needle + j) && (i + j) < len)
		{
			if (0 == *(needle + j + 1))
				return ((char *)haystack + i);
			++j;
		}
		++i;
	}
	return (NULL);
}
