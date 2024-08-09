/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-ped <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 10:09:31 by made-ped          #+#    #+#             */
/*   Updated: 2023/11/18 17:56:40 by made-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s1, int c)
{
	int		i;
	char	*p_s1;

	i = (ft_strlen(s1));
	p_s1 = (char *)s1;
	while (i >= 0)
	{
		if (p_s1[i] == (char)c)
			return (p_s1 + i);
		i--;
	}
	return (NULL);
}
