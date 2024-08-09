/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-ped <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 09:39:55 by made-ped          #+#    #+#             */
/*   Updated: 2023/11/18 17:54:40 by made-ped         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s1, int c)
{
	int		i;
	char	*p_s1;

	i = 0;
	p_s1 = (char *)s1;
	while (p_s1[i] != (char)c)
	{
		if (p_s1[i] == '\0')
			return (NULL);
		i++;
	}
	return (p_s1 + i);
}
/*
int	main()
{
	char str[] = "Hola mundo";
	char c = 'm';
	printf("%s\n", ft_strchr(str, c));
	return (0);
}
*/
